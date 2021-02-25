#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count=0,j,i;
    cin>>s;
    for(i=0;s[i];i++)
    {   
        for(j=0;j<i;j++)
        {
            if(s[i]==s[j])
            break;
        }
        if(i==j)
        count++;
    }
    if(count%2!=0)
    cout<<"IGNORE HIM!";
    else
    cout<<"CHAT WITH HER!";
    
}