/*
 * Google Kickstart Round D 2020
 * Q1. Record Breaker
 * https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff08/0000000000387171
 *
 */


//
// Created by Sumit Suman on 09-08-2021.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin >> n;

     int a[n+1];
     a[n] = -1;

     for(int i = 0; i<n;i++)
     {
         cin >> a[i];
     }

     if(n == 1)
     {
         cout << "1" << endl;
         return 0;
     }

     int ans = 0;
     int mx = -1;

     for(int i = 0; i <n; i++)
     {
         if(a[i] > mx && a[i] > a[i+1])
         {
             ans++;
         }
         mx = max(mx, a[i]);
     }
     cout << ans << endl;
     return 0;
}
