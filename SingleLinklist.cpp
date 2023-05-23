#include<bits/stdc++.h>
using namespace std;
//5,10,15,20.......17,3
struct node{
    int data;
    node *next;
};

node *createNode(int data)//5
{
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}/// 5
/// 5,10
///newNOde=17
///temp=10
///temp1=15
/// 5,10,17,15,20
node *insertNode(node *head,int data,int pos)
{
    node *newNode = createNode(data);//17
    if(pos==1){
        newNode->next=head;
        head=newNode;
        return head;
    }
    node *temp=head;
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    node *temp1 = temp->next;
    temp->next = newNode;
    newNode->next = temp1;
    return head;
}

node *insertEnd(node *head,int data)
{

    node *newNode=createNode(data);
    if(head==NULL){
        head=newNode;
        return head;
    }
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = newNode;
    return head;
}
///temp = 10
///temp1 = 15
/// 5,10,20
node *deleteNode(node *head,int pos)
{
    node *temp=head;
    if(pos==0){
       head=temp->next;
       return head;
    }
    node *temp1;
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    temp1=temp->next;
    temp->next = temp1->next;
    free(temp1);
    return head;
}
///NULL,5,10,15,20,NULL
///out-> 20->15->10->5->NULL

///prev=null
///current = 5
///next=10

///prev = 5;
///current = 10
///next = 15

///prev =10
///current = 15
///next=20

///prev = 15
/// current = 20
/// next = NULL

///prev = 20
/// current = NULL

node *revLinkList(node *head)
{
    node *prev,*current,*next;
    prev=NULL;
    current=head;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}

void printLink(node *head)
{
    //cout<<head->data<<endl;
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main()
{
    node *head = NULL;
    int n,x;
    cin>>n;
    for(int i = 1 ; i<=n ; i++){
        cin>>x;
        head=insertEnd(head,x);
    }
    //head = deleteNode(head,2);
   // head = revLinkList(head);
    printLink(head);
}
