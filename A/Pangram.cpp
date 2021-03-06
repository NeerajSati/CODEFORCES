#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,j;
    string a;
    cin>>n;
    cin>>a;
    for(char i=65;i<91;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]==i || a[j]==i+32)
            break;
        }
        if(j==n)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        
    }
    cout<<"YES"<<endl;
    return 0;
}