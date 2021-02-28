#include <iostream>

using namespace std;

int main()
{
    string s1,s="hello";
    int j,prev=-1,count=0;
    cin>>s1;
    for(int i=0;i<s.length();i++)
    {
        j=prev+1;
        for(;j<s1.length();j++)
        {
        if(s[i]==s1[j])
        {   count++;
            break;
        }
        }
        prev=j;
        
    }
    if(count==5)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
