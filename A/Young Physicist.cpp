#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s[101][3];
    int j,i,n,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {   
        for(j=0;j<3;j++)
        {
            cin>>s[i][j];
        }
    }
    for(j=0;j<3;j++)
    {   
        for(i=0;i<n;i++)
        {
            sum+=s[i][j];
        }
        if(sum!=0)
        {
            cout<<"NO";
            return 0;
        }
        sum=0;
    }
    cout<<"YES";
    return 0;
    
}