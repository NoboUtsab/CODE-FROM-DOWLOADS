#include<bits/stdc++.h>
using namespace std;
void new_array (int x[],int y[], int num)
{
   int i, k=1;
   int arr[2*num+2];
     for(i=1; i<=num; i++)
    {
      arr[k]=y[i];
      k++;
    }
    for(i=1; i<=num; i++)
    {
        arr[k]=x[i];
        k++;
    }

    for(i=1; i<=2*num; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()

{
    int n,i;
    cin>>n;
    int a[n+2], b[n+2];
    for(i=1; i<=n; i++)
        cin>>a[i];
    for(i=1; i<=n; i++)
        cin>>b[i];

    new_array(a,b,n);
}
