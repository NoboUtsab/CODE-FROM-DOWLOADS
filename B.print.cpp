#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    for(int i=1; i<=n; i++)
    {
       if(i==n)
       {
           cout<<i;
       }
       else
        cout<<i<<" ";
    }
}

int main()
{
    int x;
    cin>>x;
    print(x);
    return 0;
}
