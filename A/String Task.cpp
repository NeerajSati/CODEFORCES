#include <iostream>
#include<string.h>

using namespace std;
int main()
{   int x;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
    x=s[i];
    
    if(x<97)
    s[i]+=32;
    if(s[i]==97||s[i]==101||s[i]==105||s[i]==111||s[i]==117||s[i]==121)
    continue;
    
    cout<<".";
    cout<<s[i];
    }
    return 0;
}