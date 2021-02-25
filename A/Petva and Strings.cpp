#include <bits/stdc++.h>
#include<string.h>

using namespace std;
int main()
{
    string s,s2;
    cin>>s>>s2;
    transform(s.begin(), s.end(), s.begin(), ::tolower); 
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
    if((s.compare(s2)) < 0) 
    cout<<"-1";
    if((s.compare(s2)) == 0) 
    cout<<"0";
    if((s.compare(s2))>0)
    cout<<"1";
    return 0;
}