/******************************************************************************
Author : Amany Ahmed
problem link : https://codeforces.com/problemset/problem/510/A
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
   int n , m ;
   cin >> n >> m;
   for (int i = 1 ; i <= n ; i++) {
		for (int j = 1 ; j <= m ; j++) {
			if (i % 2 == 1) {
				if (j == m) {
					cout <<"#\n";
				}
				else {
					cout << "#";
				}
			}
			else if (i % 4 == 0) {
				if (j == 1) {
					cout << "#";
				}
				else if (j == m) {
					cout << ".\n";
				}
				else {
					cout << ".";
				}
			}
			else {
				if (j == m) {
					cout << "#\n";
				}
				else {
					cout << ".";
				}
           }
		}
	}


    return 0;
}