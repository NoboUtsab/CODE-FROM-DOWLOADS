#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll prime(ll  p)
{
    int f=0;
    if(p<2)
    {
        f=1;
        return f;
    }

    for(int i=2; i*i<=p; i++)
    {

        if(p%i==0)
        {
            f=1;
            break;
        }

    }

   return f;
}

int main()
{
    ll  a,x,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;

        x=prime(n);

    if(x==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
}


