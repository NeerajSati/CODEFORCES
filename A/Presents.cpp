#include<bits/stdc++.h>
using namespace std;  
int main()
 {
     int n,l;
     cin>>n;
     int p[n],x[n];
     for(int i=0;i<n;i++)
     {
     cin>>p[i];
     l=p[i]-1;
     x[l]=i+1;
     }
     
     for(int i=0;i<n;i++)
     {
     cout<<x[i]<<" ";
     }
     
     cout<<endl;
     return 0;
 }