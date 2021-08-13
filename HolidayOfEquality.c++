/******************************************************************************
Author : Amany Ahmed
problem link : http://codeforces.com/problemset/problem/758/A
*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

//maxi function to return maximum number in the array of welfare of ith citizen
ll maxi(ll arr[],ll n){
    ll maxi = arr[0] ;
     for(int i = 0 ; i < n ; i++){
        if(arr[i] >= maxi )
            maxi = arr[i];
     }
  return maxi;
}
int main()
{
  ll n ; //length of the array
  cin>>n;
  ll welfareOfIthCitizen[n] , sum = 0; //array of welfare values

  for(int i = 0 ; i < n ; i++){
    cin >> welfareOfIthCitizen[i];
  }
  //defining the max in the array
  ll maximum = maxi(welfareOfIthCitizen,n);

  //looping through array to find how many perls required to achieve equalizing
  for(int i = 0 ; i < n ; i++){
        sum += (maximum - welfareOfIthCitizen[i]);
  }

  cout << sum ;
    return 0;
}
