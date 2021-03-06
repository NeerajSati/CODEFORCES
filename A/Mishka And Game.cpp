#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,c,win=0;
    cin>>n;
    while(n--)
    {
        cin>>m>>c;
        if(m>c)
        win++;
        else if(m<c)
        win--;
    }
    if(win>0)
    cout<<"Mishka";
    else if(win<0)
    cout<<"Chris";
    else
    cout<<"Friendship is magic!^^";
    
    return 0;
}