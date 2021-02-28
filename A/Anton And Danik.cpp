#include <iostream>
using namespace std;
 
int main()
{
    int n,counta=0,countd=0;
    char a[100001];
    cin>>n;
    for(int i=0;i<n;i++)
    {   cin>>a[i];
        if(a[i]=='A')
        counta++;
        if(a[i]=='D')
        countd++;
    }
    if(countd==counta)
    cout<<"Friendship";
    else if(countd>counta)
    cout<<"Danik";
    else
    cout<<"Anton";
    
    return 0;
}