//
// Created by Sumit Suman on 02-08-2021.
//

#include<iostream>
using namespace std;

int main()
{
    int mx = INT_FAST64_MIN;
    int size;
    cout << " Enter size of array: " ;
    cin >> size;

    int array[size];
    cout << "Enter elements in array: ";
    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    for(int i = 0; i < size; i++)
    {
        mx = max(mx, array[i]);
        cout << mx << endl;
    }
    return 0 ;
}

