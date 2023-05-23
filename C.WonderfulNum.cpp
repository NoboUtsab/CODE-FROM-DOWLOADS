#include<bits/stdc++.h>
using namespace std;

void binary(int x)
{
    int s[10000],c=0,i=0,j,k;
    while(x!=0)
    {
        s[i]=x%2;
        x=x/2;
        i++;
    }
    for(k=0,j=i-1; k<=i/2; k++,j--)
    {
        if(s[k]!=s[j]) {c=1;}
        //else return 1;
    }
    if(c==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

void odd(int a)
{
    if(a%2!=0)
    {
        binary(a);
    }
    else cout<<"NO"<<endl;
}

int main()
{
    int n;
    cin>>n;
    odd(n);

}
