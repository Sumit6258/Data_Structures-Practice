//
// Created by Sumit Suman on 25-07-2021.
//

#include<iostream>
using namespace std;

void Insertion_Sort(int array[], int size)
{
    for(int i = 1; i < size; i++)
    {
        int current = array[i];
        int j = i - 1;
        while(array[j] > current && j >= 0){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = current;
    }
}

int main()
{
    int size;
    cout << " Enter size of array: " ;
    cin >> size;

    int array[size];
    cout << "Enter elements in array: ";
    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    Insertion_Sort(array,size);
    cout << "Sorted Array: ";
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
