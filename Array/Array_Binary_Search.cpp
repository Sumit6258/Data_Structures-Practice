//
// Created by Sumit Suman on 17-07-2021.
//

#include<iostream>
using namespace std;

int Binary_Search(int array[], int size, int key)
{
    int first = 0;
    int last  = size;

    while(first <= last){
        int mid = (first + last)/2;

        if(array[mid] == key){
            return mid;
        }
        else if(array[mid] > key){
            last = mid - 1;
        }
        else{
            first = mid + 1;
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

    cout << "Element " <<"\""<< key <<"\"" << " found at index " << Binary_Search(array,size,key) << endl;

    return 0;
}


