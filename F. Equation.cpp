#include<bits/stdc++.h>
using namespace std;
void equation(double x,double n)
{
  long long int     sum=1,res=0;
    for(int i=2; i<=n; i=i+2)
    {
       // sum+=pow(x,i);
       sum=sum*(x*x);
       res=res+sum;
    }
    cout<<res<<endl;

}
int main()
{
   double x,n;
   cin>>x>>n;
   equation(x,n);
}
