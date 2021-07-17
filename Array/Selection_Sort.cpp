//
// Created by Sumit Suman on 17-07-2021.
//

#include<iostream>
using namespace std;

void Selection_Sort(int array[], int size)
{
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(array[j] < array[i]){
                int min = array[j];
                array[j] = array[i];
                array[i] = min;//here swapping is done
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

    Selection_Sort(array,size);
    cout << "Sorted Array: ";
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
