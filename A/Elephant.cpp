#include <iostream>

using namespace std;

int main()
{
    long int n;
    int r=0,step=0;
    cin>>n;
    for(int i=0;n!=0;i++)
    {   step++;
        if(n>=5)
        n=n-5;
        else
        n=0;
    }
    cout<<step;
    return 0;
}