#include<bits/stdc++.h>
using namespace std;
int  maximum(int arr[],int n)
{
   int  maxx=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>maxx){
            maxx=arr[i];
        }
    }
    return maxx;
}

int  minimum(int arr[],int n)
{
   int  minn=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<minn){
           minn =arr[i];
        }
    }
    return minn;
}


int main()
{
   int n,i,x,z;
   cin>>n;
   int a[n+2];
   for(i=0; i<n; i++){
    cin>>a[i];
   }
   x= maximum(a,n);

   z=minimum(a,n);
   cout<<z<<" "<<x<<endl;
}
