#include<bits/stdc++.h>
using namespace std;
int n,x,y;


void swap_matrix(int arr[500][500])
{
    int k,i;
    for( k=1; k<=n; k++)
        swap(arr[x][k],arr[y][k]);

    for( i=1; i<=n; i++)
        swap(arr[i][x],arr[i][y]);
}

int main()
{
    int i,j;
    cin>>n>>x>>y;
    int a[500][500];
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cin>>a[i][j];
        }
    }
   swap_matrix(a);
     for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
