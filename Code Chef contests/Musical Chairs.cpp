#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n--;
        int res = 0;
        for (int i=1; i<=sqrt(n); i++)
        {
            if (n%i == 0)
            {
            if (n/i == i)
                res++;
            else
                res+=2;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
