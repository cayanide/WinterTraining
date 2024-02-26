#include<iostream>
using namespace std;

struct node{
    int data ;
    struct node *link;
};

int main(){
    struct node *head = NULL;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=1;
    head->link=NULL;
    cout<<head->data<<endl;

    struct node *current =malloc(sizeof(struct node));
    current->data=2;
    current->link=NULL;
    head->link=current;
    cout<<head->data<<endl;

}