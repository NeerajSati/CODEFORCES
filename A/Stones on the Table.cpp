#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[50];
    int count=0,n;
    cin>>n;
    cin>>s;
    for(int i=1;i<n;i++)
    {   
        if(s[i]==s[i-1])
        count++;
    }
    cout<<count;
}