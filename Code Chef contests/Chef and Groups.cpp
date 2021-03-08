#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int grp,t;
    cin>>t;
    while(t--)
    {
        grp=0;
        cin>>s;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='1')
            {
                if(s[i+1]=='0'||s[i+1]=='\0')
                grp++;
            }
            
        }
        cout<<grp<<endl;
    }
    
    
    return 0;
}
