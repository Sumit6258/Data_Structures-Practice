//
// Created by Sumit Suman on 19-07-2021.
//

#include<iostream>
using namespace std;

void Bubble_Sort(int array[], int size)
{
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1; j++){
            if (array[j] > array[j+1]){
                swap(array[j], array[j+1]);
            }
        }
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

    Bubble_Sort(array, size);
    cout << "Sorted Array: ";
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}

void swap(int a, int b)
{
    a ^= b;
    b ^= a;
    a ^= b;
}


