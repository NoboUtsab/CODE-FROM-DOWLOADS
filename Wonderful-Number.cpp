#include<bits/stdc++.h>

using namespace std;

int * decToBinary(int n)
{

    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    return binaryNum;
}

int main()
{
    int n,flag = 1;;
    int *bin;
    cin>>n;
    bin = decToBinary(n);
    for(int i = 0,int j=bin.size()-1 ; i < bin.size()/2 ; i++,j--){
        if(bin[i]==bin[j]){
            continue;
        }
        flag = 0;
    }
    if(n%2==1 && flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
