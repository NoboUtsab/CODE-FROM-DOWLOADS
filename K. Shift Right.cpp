#include<bits/stdc++.h>
using namespace std;
void right_shift(int arr[],int num, int t)
{

    while(t--)
    {
        int i=num-1;
        int  key=arr[num];
        while(i!=0)
        {
            arr[i+1]=arr[i];
            i=i-1;
        }
        arr[1]=key;
    }
     for(int  i=1; i<=num; i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n+1];
    for(int i=1; i<=n; i++)
        cin>>a[i];

    right_shift(a,n,x);


}
