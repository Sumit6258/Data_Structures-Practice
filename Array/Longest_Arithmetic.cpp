/*
 * Google Kickstart Round E 2020
 * Q1. Longest Arithmetic
 * https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff47/00000000003bf4ed
 *
 */


//
// Created by Sumit Suman on 07-08-2021.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    for(int i=0;i<t;i++){
        cin >> n;
        int a[n];
        for(int j = 0; j <n;j++){
            cin >> a[j];
        }
        int pd = 0;
        int curr = 1;
        int ans = 0;
        for(int j=0;j<n;j++){
            if(j==0){
                pd = a[j+1] - a[j];
            }
            else{
                if(a[j] - a[j-1] == pd){
                    curr++;
                }
                else{
                    pd = a[j] - a[j-1];
                    if(curr > ans){
                        ans = curr;
                    }
                    curr = 2;
                }
            }
        }
        if (curr > ans){
            ans = curr;
        }
        cout << "Case #"<<i+1<<": "<<ans<<endl;
    }
}

/*
    int ans = 2;
    int pd = a[1] - a[0];
    int j = 2;
    int curr = 2;

    while(j < n)
    {
        if(a[j] - a[j-1] == pd)
        {
            curr++;
        }
        else{
            pd = a[j] - a[j-1];
            curr = 2;
        }
        ans = max(ans,curr);
        j++;
    }
    cout << ans << endl;
    */