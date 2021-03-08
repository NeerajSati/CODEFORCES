#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    long long N,K; 
    cin>>N>>K;
    long long a[N];
    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }
    
    if(N == 1)
    {
        if(K%2 == 1)
        cout<<"-1";
        else
        cout<<a[0];
    }
    else if(K >= N)
    cout<<*max_element(a,a+N);
    else
    {
        long long temp=*max_element(a,a+K-1);
        if(temp>a[K])
        cout<<temp;
        else 
        cout<<a[K];
    }
    return 0;
}
