/******************************************************************************
Author : Amany Ahmed
problem link : https://atcoder.jp/contests/abc076/tasks/abc076_b
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
   int n,k , x=1 ;
   cin >> n >> k ;
 
  for (int i = 1 ; i <= n ; i++) {
      if((x+k) < (x*2)){
          x = x + k;
      }
      else{
          x *=2;
      }
  }
    cout << x;
    return 0;
}
