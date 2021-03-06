#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,max,min,amz=0;
    cin>>n;
    int a[n];
    cin>>a[0];
    max=a[0];
    min=a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
            if(a[i]>max)
            {
                max=a[i];
                amz++;
            }
            else if(a[i]<min)
            {
                min=a[i];
                amz++;
            }
    }
    cout<<amz<<endl;
    return 0;
}