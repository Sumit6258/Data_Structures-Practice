//
// Created by Sumit Suman on 03-08-2021.
//

#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of array:";
    cin >> size;

    int array[size];
    cout << "Enter elements in array: ";
    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum = 0;
        for(int j = i; j < size; j++)
        {
            sum += array[j];
            //cout << array[j] << endl;
            cout << sum << endl;
        }
    }

    return 0;
}