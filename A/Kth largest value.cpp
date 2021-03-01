#include<bits/stdc++.h>
using namespace std;  
int main()
 {
     int n,q,i,qel,t,cnt1=0;
     cin>>n>>q;
     int a[n];
     for(i=0;i<n;i++)
     {
         cin>>a[i];
         if(a[i]==1)
         cnt1++;
     }
     while(q--)
     {
        cin>>t>>qel;
        if(t==1)
        {
            if(a[qel-1]==1)
                cnt1--;
            else
                cnt1++;
            a[qel-1]=1-a[qel-1];
        }
        
        else if(t==2)
        {
            if(qel<=cnt1)
            cout<<"1"<<endl;
            else
            cout<<"0"<<endl;
        }
     }
     
     return 0;
 }