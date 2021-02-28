#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,x=0;
    string s;
    
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s == "X++" || s == "++X")
            x++;
            
        else if(s == "X--" || s == "--X")
            x--;
    }
    cout<<x;
    return 0;
}