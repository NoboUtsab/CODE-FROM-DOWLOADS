#include<bits/stdc++.h>

using namespace std;


int main()
{
    int i,j,T,N,a[100];
    cin>>T;
    while(T--){
        cin>>N;
        for(i=0;i<N;i++){
            cin>>a[i];
        }
        int count = 0;
    for (int i=0; i<N; i++)
    {
        for (int j=i+1; j<N; j++)
        {
            if (a[j] > a[j-1])
            {
                count++;
            }
            else
            {
                break;
            }
        }
    }
        cout<<count+N<<endl;
    }
}
