//
// Created by Sumit Suman on 11-08-2021.
//

/*
 * Given an array of size N. The task is to find the first repeating
 * element in the array of integers, i.e, an element that occurs more than
 * once and whose index of first occurrence is smallest.
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int a[size];
    for(int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    const int N = 100000;
    int idx[N];
    for(int i = 0; i < size; i++)
    {
        idx[i] = -1;
    }

    int minidx = INT_MAX;

    for(int i = 0; i < size; i++)
    {
        if(idx[a[i]] != -1)
        {
            minidx = min(minidx, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }

    if(minidx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minidx + 1 << endl;
    }
    return 0;
}

