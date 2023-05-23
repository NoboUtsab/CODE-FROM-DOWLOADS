#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,i,x,z;
   cin>>n;
   int a[n+2];
   for(i=0; i<n; i++){
    cin>>a[i];
   }
  sort(a,a+n);
  cout<<a[0]<<" "<<a[n-1]<<endl;

}

