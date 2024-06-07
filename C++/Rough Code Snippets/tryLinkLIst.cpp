#include<iostream>
using namespace std;

class Node {
    public:
   
    int data;
    Node* next;
     Node *prev;
    Node(int data){
        this->data = data;
        this->next =NULL;
    }
};

void insertAtHead(Node* &head, int data){

Node* temp = new Node(data);
temp->next = head;
temp->prev =
head=temp;



}

void insertAtTail(Node* &tail, int data){




}










int main(){

cout<<"Welcome to Linked List"<<endl;

cout<<endl;


int index=0,size;

cout<<"Enter the size of the list"<<endl;
cin>>size;

Node* head=NULL;
Node* tailsss=NULL;

for(index=0;index<size;index++){

    int data;
    cout<<"Enter the data For Index : "<< index <<endl;
    cin>>data;
    insertAtHead(head,data);
}
cout<<endl;

printList(head);


cout<<"Enter A Choice : "<<endl; 

cout<<"Enter 1 for Insertion At Head : "<< endl;

cout<<"Enter 2 for Insertion At Tail : "<< endl;

cout<<"Enter 3 for Deletion At Head : "<< endl;

cout<<"Enter 4 for Deletion At Tail : "<< endl;

cout<<"Enter 5 for Insertion At Middle : "<<endl;

cout<<"Enter 6 for Deletetion At Middle : "<< endl;

cout<<"Enter 7 for Printing the List : "<< endl;

cout<<"Enter 8 for Searching for Deletion : "<< endl;

cout<<"Enter 9 for Searching for Insertion : "<< endl;



cout<<"Enter 0 for Exit : "<< endl;



int choice;
cin>>choice;


switch(choice) {
  case 1:
  cout<<"Enter the data to be inserted at head"<<endl;
  int data;
  cin>>data;
  insertAtHead(head,data);
  break;
    // code block
    break;
  case 2:
  cout<<"Enter the data to be inserted at tail"<<endl;
  int data;
  cin>>data;

  insertAtTail(tailss,data);
  break;
    // code block
    break;

  default:
    // code block
}
    return 0;
}