#include <bits/stdc++.h>

using namespace std;

int main()
{
    long t,a,b;
    cin>>t;
    
    while(t--)
    {
        cin >> a >> b;
        if(a > b)
        {
            if(a % b == 0)
            cout << "0" <<endl;
            else
            cout << b - a%b <<endl;
        }
        else
        {
        cout << b - a <<endl;
        }

    }
    
    return 0;
}
