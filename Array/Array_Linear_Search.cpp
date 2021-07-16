//
// Created by Sumit Suman on 16-07-2021.
//

#include<iostream>
using namespace std;

int LinearSearch(int array[], int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        if (array[i] == key){
            return i;
        }
    }
    return -1;//i.e element not found in the array
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
    int key;
    cout << "Enter key element to find: ";
    cin >> key;
    cout << "Element " <<"\""<< key <<"\"" << " found at index " <<LinearSearch(array,size,key) << endl;
    return 0;
}

