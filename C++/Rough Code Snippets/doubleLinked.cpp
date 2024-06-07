#include<iostream>

using namespace std;
struct Node{
    int data;
    struct Node *next;
    struct Node *flink;
    struct Node *plink;


        /* data */
    
    
    
};


void traversal((struct Node* node){
       struct Node* temp = node;
if(node==NULL){
    cout<<"List Is Empty";

}
else {
    
    temp=node;
    while(temp!=NULL){
    cout<<temp->data<<"->";
    temp = temp->flink;
    }
}

}


int main(){

}