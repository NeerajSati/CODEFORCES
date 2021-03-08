#include <iostream>

using namespace std;

int main()
{
    int n,m,a,b,gcost;
    cin>>n>>m>>a>>b;
    int min=n*a;
    
    if( ((n%m)*a) < b )
    gcost=(n/m*b) + ((n%m)*a);
    else
    gcost=(n/m*b) + b;
    
    if(gcost<min)
    min=gcost;
    
    cout<<min<<endl;

    return 0;
}
