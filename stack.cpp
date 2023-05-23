#include<bits/stdc++.h>
using namespace std;
int top =-1  ;


void push(int stacks[], int k, int n)
{
    if(top==n-1)
    {
        cout<<"The Stack is Full";

    }
    else
    {
        top++;
        stacks[top] = k;
    }


}
void pop(int stacks[])
{
    if(top==-1)
    {
        cout<<"The Stack is Empty";
    }
    else
    {
        cout<<"The Deleted Item is "<<stacks[top]<<" ";
        top--;

    }
}
void display(int stacks[])
{
    if(top==-1)
    {
        cout<<"The stack is empty"<<endl;
    }
    else
    {
        cout<<stacks[top]<<" ";
        for(int i=top-1; i>=0; i--)
        {
            cout<<stacks[i]<<" ";
        }
    }
}

int main()
{
    int n=2;

    int top ;
    int stacks[2];
    int k =0;
    top = -1;
    push(stacks,6,n);
    push(stacks,7,n);
    pop(stacks);
    display(stacks);

}
