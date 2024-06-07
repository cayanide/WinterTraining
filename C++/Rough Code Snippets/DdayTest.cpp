#include<iostream>

using namespace std;

class Node {
    
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        data = data;
        next = NULL;
        
    }
};

 int ListCreate(Node* &head, int data){

   Node* Cluster=new Node (data);
   head=Cluster;
   return 0;


}


int printDATA(Node* &head){

    Node* temp  = head;

    while(temp->next != NULL){
        cout<<temp->data<<" -->";
        temp = temp->next;
    }
}
int main(){

    cout << "Welcome to Linked List" <<endl;
    
    cout << "********************************" << endl;

    cout<<"Enter The Size of your List" <<endl;

    int Index = 0,i = 0,data;

    cin >> Index;
    
    cout << "********************************" << endl;

    Node*  head =NULL;
    Node*  tail = NULL;

    for(i=0; i<Index; i++){

        cin >> data;
       ListCreate(head,data);
     }

printDATA(head);




    

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
cin >> choice;


return 0;

}