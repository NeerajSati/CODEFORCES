#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s[4],count=0;
    
    for(int i=0;i<4;i++)
        cin>>s[i];
    
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        if(s[i]==s[j])
        {
        count++;
        break;
        }
    }
    cout<<count<<endl;
    return 0;
}
