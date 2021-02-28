#include<bits/stdc++.h>
using namespace std;  
int main()
 {
     int n,a,b,c,d;
     
     cin>>n;
     while(1&&n<=9000)
     {
         n++;
         d=n%10;  
         c=n/10%10;
         b=n/100%10;
         a=n/1000;
         
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
         {
             break;
         }
     }
     cout<<n;
     return 0;
 }