#include <bits/stdc++.h>

using namespace std;

int main()
{
    long x,n;
    int y,t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        cout<<((n - y) / x)*x + y<<endl;
    }
    
    return 0;
}