#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n ;
     cin >>n;
     int pro = 1 ; 
     for(int i = n ; i>=1 ; i--)
     {
     pro = pro * i ;
     }
     cout<<pro;
}
