#include<bits/stdc++.h>
using namespace std;
int maximum(int x[], int n)
{
    int p=x[0];
    for(int i=1; i<n; i++)
    {
        if(x[i]>p)
            p=x[i];
    }
    return p;
}
int minimum (int x[], int n)
{
    int p=x[0];
    for(int i=1; i<n; i++)
    {
        if(x[i]<p)
            p=x[i];
    }
    return p;
}
int primenumber (int x[], int n)
{
    int c=0;
    for(int i=0; i<n; i++)
    {
        if(x[i]<2) continue;
        if(x[i]==2)
        {
            c++;
            continue;
        }
        if(x[i]%2==0)
        {
            continue;
        }
        for(int j=3; i<x[i]; j=j+2)
        {
            if(x[i]%j==0) break;
            else
            {
                c++;
                break;
            }
        }

    }
    return c;
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
int main()
{
    int n;
    cin>>n;
    int a[n+2];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int  maxx= maximum (a,n);
    cout<<"The maximum number : "<<maxx<<endl;
    int  minn= minimum (a,n);
    cout<<"The minimum number : "<<minn<<endl;
    int prime= primenumber(a,n);
    cout<<"The number of prime numbers : "<<prime<<endl;
    int divv= divisor(a,n);
    cout<<"The number that has the maximum number of divisors : "<<divv<<endl;

}
