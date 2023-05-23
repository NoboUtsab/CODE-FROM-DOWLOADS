#include<bits/stdc++.h>
using namespace std;
int number(int arr[],int num)
{
     int c=0,x,j,i;
     for(i=0; i<num; i++)
    {
        for(j=0; j<num; j++)
        {
            if(i==j)
            {
                c++;
            }
            if(arr[i]==arr[j])
            {
                break;
            }
        }
    }
    return c;
}
int main()
{
    int n,i;
    cin>>n;
    int a[n+2];

    for(i=0; i<n; i++)
    {
        cin>>a[i];

    }

int    x=number(a,n);
    cout<<x<<endl;

}
