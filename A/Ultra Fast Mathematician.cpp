#include <iostream>
using namespace std;

int main()
{
    string s1,s2;
    int l=0;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++)
    {
    l=s1[i]^s2[i];
    cout<<l;
    }
    return 0;
    
}