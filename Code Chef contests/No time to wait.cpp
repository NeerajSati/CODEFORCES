#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,h,x;
    cin>>n>>h>>x;
    int t[n];
    for(int i=0;i<n;i++)
    cin>>t[i];
    
    if(h<=x)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(x+t[i]>=h)
            {
            cout<<"YES";
            return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
