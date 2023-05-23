#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void prime(ll  p)
{
    int f=0;
     if(p<2) {f=1; goto pp;}
     //if(n%2==0) return 0;
    for(int i=2; i*i<=p; i++)
    {

        if(p%i==0)
        {
            f=1;
            break;
        }

    }
    pp:
    if(f==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main()
{
   ll  a,x,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;

        prime(n);
    }
}

