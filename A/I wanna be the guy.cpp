/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,p,q,z,a[200],check=0;
    
    cin>>n;
    
    cin>>p;
    for(int i=0;i<p;i++)
    cin>>a[i];
    
    cin>>q;
    for(int i=p;i<p+q;i++)
    cin>>a[i];
    
    for(int i=1;i<=n;i++)
    {
        check=0;
        for(int x=0;x<p+q;x++)
        {
            if(a[x]==i)
            {
                check=1;
                break;
            }
        }
        
        if(check==0)
        {
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }   
    }
    
    cout<<"I become the guy."<<endl;
    
    return 0;
}
