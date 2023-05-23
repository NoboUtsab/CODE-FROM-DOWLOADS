#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 void average (int x)
 {
    double num, sum=0;
      for(int i=0; i<x; i++){
        cin>>num;
        sum+=num;
    }
   printf("%.7lf\n",sum/x);
 }
int main()
{
    int n;
    double num;
    cin>>n;

    average(n);
}
