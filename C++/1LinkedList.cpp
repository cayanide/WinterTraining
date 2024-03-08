#include<iostream>
using namespace std;


#include<algorithm>

class Node {


    public:
    int data;
    Node* prev;
    Node* next;

};


Node* insertAtHead(Node* head, int data) {

 Node* newNode = new Node();
 newNode->data = data;
 newNode->next = head;
 newNode->prev = NULL;
 if(head!= NULL) {
     head->prev = newNode;
 }
 head = newNode;
 return head;
 
}
Node* insertAtTail(Node* head , int data){
Node* newNode = new Node();
newNode->data = data;

newNode->next = NULL;

if(head == NULL) {
    head = newNode;
    return head;
}
else {
    Node* temp = head;
    while(temp->next!= NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}
}
Node* deleteAtHead(Node* head){
    Node* temp =head;
    if(temp!= NULL) {
        head = head->next;
        delete temp;
    }
    return head;
}

Node* deleteAtTail(Node* head){
    Node* temp = head;
    if(temp!= NULL) {
        while(temp->next!= NULL) {
            temp = temp->next;
        }
        temp->next = NULL;
        delete temp;
    }
    return head;
}

Node* PrintList(Node* head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<"->"<<temp->data; 
        temp=temp->next;
    }
    return head;
}


Node* insertAtMiddle(Node* head, int data){
    Node* newNode = new Node();
    newNode->data = data;
    Node* temp = head;
    int count = 0;
    if(temp!= NULL) {
        while(temp->next!= NULL) {
             count++;
            temp = temp->next;
           
        }
        int middlen = count/2;

        temp = head;
        for(int i=0;i<middlen;i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        temp->next->prev = newNode;
        
    }
    return head;

}

Node* deleteAtMiddle(Node* head){
    Node* temp = head;
    int count = 0;
    if(temp!= NULL) {
        while(temp->next!= NULL) {
             count++;
            temp = temp->next;
           
        }
        int middlen = count/2;
        temp = head;
        for(int i=0;i<middlen;i++) {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        temp->next->prev = temp;
        delete temp->next;


    return head;

}
}

Node* searchForDeletion(Node* head,int data){
    Node* temp = head;
    while(temp!= NULL) {
        if(temp->data == data) {
            return temp;
        }
        temp = temp->next;
    }
    
    return head;

}

Node* searchForInsertion(Node* head,int data){
    Node* temp = head;
    while(temp!= NULL) {
        if(temp->data == data) {
            Node* tempNode= new Node();
            tempNode->data = data;
            tempNode->next = temp->next;
            tempNode->prev = temp;
            temp->next = tempNode;
            temp->next->prev = tempNode;
            return head;

        }
         else
        {
            cout<<"Error Element not found";
        }
        temp = temp->next;
        }
       
    return head;

}

bool choices(int choice, Node* head,bool flag){
    int element;
    
switch (choice) {
 
    case 1:
     cout<<"Running..."<<endl;
     cout<<" Enter Data For Insertion At Head : "<< endl;
     cin>>element;
     head=insertAtHead(head,element);
     PrintList(head);
     break;
    case 2:
     cout<<"Running..."<<endl;
     cout<<" Enter Data For Insertion At Tail : "<< endl;
     cin>>element;
     head=insertAtTail(head,element);
     PrintList(head);
     break;
    case 3:
     cout<<"Running..."<<endl;
     head=deleteAtHead(head);
      break;
    case 4:
     cout<<"Running..."<<endl;
     head=deleteAtTail(head);
      break;
     case 5:
     cout<<"Running..."<<endl;
     cout<<" Enter Data For Insertion At Middle : "<< endl;
     cin>>element;
     head=insertAtMiddle(head,element);
      break;
    case 6:
     cout<<"Running..."<<endl;
     cout<<"  Delete At Middle : "<< endl;
     head= deleteAtMiddle(head);
      break;
    case 7:
     cout<<"Running..."<<endl;
     head=PrintList(head);
      break;
    case 8:
     cout<<"Running..."<<endl;
     cout<<" Enter Data For Searching for Deletion : "<< endl;
     cin>>element;
     head=searchForDeletion(head,element);
      break;
     case 9:
     cout<<"Running..."<<endl;
     cout<<" Enter Data For Searching for Insertion : "<< endl;
     cin>>element;
     head=searchForInsertion(head,element);
      break;
    case 0:
     flag=false;
     break;
     default:
     cout<<"Invalid Choice"<<endl;

     
}
return flag;
}



int main(){
    
int size,i=0,choice,element;

bool flag=true;

Node* head = nullptr;





/* ***********************************************************************************************/

cout<<"Welcome To Linked List "<<endl;

cout<<"Enter the size of the list "<<endl;

cin>>size;


for(i=0;i<size;i++)
{
    cout<<"Enter The Element : "<<i<<endl;
    int onceValue=0;
    cin>>onceValue;
    head= insertAtHead(head,onceValue);
   
}
cout << "Created linked list: ";
PrintList(head);


while(flag==true){




cout<<"              "<<endl;

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

cout<<"The Updated Linked List is :"<<endl;

cout<<endl;

PrintList(head);

cout<<"              "<<endl;



cout<<"Enter 0 for Exit : "<< endl;

cin>>choice;
flag=choices( choice,head,flag);

}

}


