#include <iostream>
 
using namespace std;
 
int main()
{
    string s;
    int uc=0,lc=0;
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        uc++;
        if(s[i]>='a'&&s[i]<='z')
        lc++;
    }
    if(uc>lc)
    {
        for(int i=0;s[i]!='\0';i++)
        {
        if(s[i]>='a'&&s[i]<='z')
        s[i]-=32;
        }
    }
    else
    {
        for(int i=0;s[i]!='\0';i++)
        {
        if(s[i]>='A'&&s[i]<='Z')
        s[i]+=32;
        }
    }
    cout<<s;
}