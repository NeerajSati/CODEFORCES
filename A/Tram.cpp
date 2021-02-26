#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n,b[1001],a[1001],pas=0,max=0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        pas=pas-a[i];
        pas=pas+b[i];
        if(max<=pas)
        max=pas;
        
    }    
    cout<<max;
    return 0;
    
}