#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x[4],max=0;
    for(int i=0;i<4;i++)
    {
        cin>>x[i];
        if(x[i]>max)
        max=x[i];
    }
    
    for(int i=0;i<4 ;i++)
    {
        if(x[i]!=max)
        cout<<max-x[i]<<" ";
    }
    
    cout<<endl;

    return 0;
}