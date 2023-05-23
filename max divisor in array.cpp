#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n+2];
    for(int i=0; i<n; i++)
    {
        cin>>x[i];
    }
    // int divv= divisor(a,n);
    int ans=0;
    for(int i=0; i<n; i++)
    {
        int d=0,e=0,m=0,r=0;
        for(int j=1; j*j<=x[i]; j++)
        {
            if(x[i]%j==0)
            {
                d++;
                e= x[i]/j;
                if(e!=j) r++;
            }
        }
        m=r+d;
        cout<<"mxxxx"<<m<<endl;
        if(m>ans)
        ans=x[i];
    }
    cout<<"The number that has the maximum number of divisors : "<<ans<<endl;

}


int divisor(int x[], int n)
{
    int i,j, ans=0;
    for(i=0; i<n; i++)
    {
        int d=0,e=0,m=0,r=0;
        for(j=1; j*j<=x[i]; j++)
        {
            if(x[i]%j==0)
            {
                d++;
                e= x[i]/j;
                if(e!=j) r++;
            }
        }
        m=r+d;
        if(m>ans)
        ans=m;
    }
    return ans;
}
