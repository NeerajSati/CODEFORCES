#include<bits/stdc++.h>
using namespace std;  
int main()
 {
     int n,count=0;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
        if(a[i]>0)
        count++;
     }
     if(count!=0)
     cout<<"HARD"<<endl;
     else
     cout<<"EASY"<<endl;
     return 0;
 }