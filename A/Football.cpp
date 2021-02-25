#include <iostream>
#include<string.h>

using namespace std;
int main()
{   int x=0,count=1,max=1;
    string s;
    cin>>s;
    for(int i=1;i<s.length();i++)
    { 
    if(s[i]==s[i-1])
    {
    count++;
    if(count>max)
    max=count;
    }

    else
    count=1;

    }

    if(max>=7)
    {
    cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}