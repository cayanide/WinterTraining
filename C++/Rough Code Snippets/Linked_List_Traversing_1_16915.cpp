#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using namespace std;
class Node {
public:
    int data;
    Node *next;
};
void insert_append(Node **head ,int data){
    Node *new_node=new Node();
    new_node->data=data;
    new_node->next=NULL;

    if(*head==NULL){
        *head=new_node;
        return;
    }
    Node *temp=NULL;
    for(temp=*head;temp->next!=NULL;temp=temp->next){}
    temp->next=new_node;
}

void displayLinkedList(Node *node){
    int c=0;
    while(node!=NULL){
        if(node->data%2!=0)c++;
        node=node->next;
    }
    if(c==0)
    {
        cout<<"No odd number present";
    }
    else{
    cout<<c;
    }
}

int main(){
    Node *head=NULL;

    int data;
    while(1){
        cin>>data;
        if(data==-1){
            break;
        }
        insert_append(&head,data);
    }

    displayLinkedList(head);
    
    return 0;
}