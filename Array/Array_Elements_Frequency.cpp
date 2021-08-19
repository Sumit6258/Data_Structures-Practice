//
// Created by Sumit Suman on 19-08-2021.
//

#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << " Enter size of array: " ;
    cin >> size;

    int array[size], freq[size], count;
    cout << "Enter elements in array: ";
    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
        freq[i] = -1;
    }

    for(int i = 0; i < size; i++)
    {
        count = 1;
        for(int j = i + 1; j < size; j++)
        {
            if(array[i] == array[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    cout << "Frequencies of elements: " << endl;
    for(int i = 0; i < size; i++)
    {
        if(freq[i] != 0)
        {
            cout << " " << array[i] << " --> " << freq[i] << endl;
        }
    }


    return 0;
}