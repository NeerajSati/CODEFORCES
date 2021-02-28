#include <iostream>
using namespace std;

int main()
{
    string s1,s;
    char temp;
    cin>>s>>s1;
    int i=0,j=s.length()-1;
    while(i<j)
    {   temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    if(s1==s)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
