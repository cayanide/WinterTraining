#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
    
};

int getCurrSize(struct Node* node){
    int size=0;

    while(node!=NULL){
        node = node->next;
        size++;
    }
    return size;
}
 insertionAtstart(struct Node** head){
    
    cout<<"Enter item To insert =>";
    int item;
    cin>>item;
  
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    
  
    newNode->data = item;

    newNode->next = *head;

    *head = newNode;



 }

  insertionAtend(struct Node** head){
struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    cout<<"Enter item To insert =>";
    int item;
    cin>>item;
    newNode->data = item;

    newNode->next = NULL;

    if(*head==NULL){
        *head = newNode;
        return 0;
    }
    
  
    struct Node* temp = *head;
    
   
    while(temp->next!=NULL)
        temp = temp->next;
    

    temp->next = newNode;
  }


void insertAfter(int n, int data, struct Node** head)
{
    int size = getCurrSize(*head);


    if(n < 1 || n > size) 
        cout << "Invalid position to insert"; 

    else { 
        struct Node* newNode = (struct Node*) malloc(sizeof(struct Node)); 

        newNode->data = data;
        newNode->next = NULL;        
        

        struct Node* temp = *head; 

        while(--n)
            temp=temp->next;

        newNode->next= temp->next;
      
        temp->next = newNode;

    }
}
void deleteStart(struct Node** head){
    struct Node* temp = *head;
  
    
    if(*head == NULL){
        cout << "Linked List Empty, nothing to delete" ; 
        return; 
    } 


    *head = (*head)->next;
    cout << "\nValue deleted: " << temp->data << endl;
    free(temp);
}


void deleteEnd(struct Node** head){
    struct Node* temp = *head;
    struct Node* previous;
    

    if(*head == NULL){
        cout << "Linked List Empty, nothing to delete" ; 
        return; 
    } 


    if(temp->next == NULL){
        *head = NULL;
        cout << "\nValue deleted: " << temp->data << endl; 
        return; 
    } 


    while (temp->next != NULL) 
    {
    
        previous = temp; 
        temp = temp->next; 
    }

    previous->next = NULL;
    
    cout << "\nValue deleted: " << temp->data << endl;

    free(temp);

}
void deletePos(struct Node** head, int n){
    struct Node* temp = *head;
    struct Node* previous;

   
    int size = getCurrSize(*head);
    
    
    if(n < 1 || n > size){
        cout << "\nEnter valid position\n"; 
        return; 
    } 

    
    if(n == 1){ 
        deleteStart(head); 
        return; 
    } 

 
    while (--n) 
    { 
   
        previous = temp; 
        temp = temp->next; 
    }
    
    previous->next = temp->next;

    cout << "\nValue deleted: " << temp->data << endl; 

   
    free(temp); 
} 
void deleteEle(struct Node** head, int n){
    struct Node* temp = *head;
    struct Node* previous;


 if (temp->data == n && temp !=NULL) {
previous=temp->next;

 }

 else {
        while (temp != NULL && temp->data != n) {
            previous = temp;
            temp = temp->next;
        }
        previous->next = temp->next;
 }


   
cout << "\nValue deleted: " << temp->data << endl;
   
    free(temp); 
}

 void display(struct Node* node){


    while(node!=NULL){
        cout << node->data << "-> ";
         node = node->next;
    }
    cout << endl;
}
int main(){
    struct Node* head = NULL;
cout<<"Number Of Elements You want to Insert => ";
int countyou;

cin>>countyou;

for(
    int i=1; i<=countyou;i++
)          
{
    insertionAtstart(&head);
}
bool flag=0;

while(flag==0){
cout<<"Select option\n";

cout<<"Press 1 For Insertion At beggining\n";
cout<<"Press 2 For Insertion At End\n";
cout<<"Press 3 For Insertion At Location \n";
cout<<"Press 4 For Deletion From Start\n ";
cout<<"Press 5 For Deletion From End\n ";
cout<<"Press 6 For Deletion of Element of Location\n ";
cout<<"Press 7 For Deletion of Element\n ";
cout<<"Press 8 For Viewing Linked List\n ";

cout<<"Press 0 For Exit \n";
int n;
cin>>n;
switch (n)
{
case 1 /* constant-expression */:
cout<<"\nNumber Of elements You want To insert at Beggining => ";
int count;
cin>>count;
for(int i=1;i<=count;i++){
    insertionAtstart(&head);
    }/* code */
    break;
case 2 :
cout<<"\nNumber Of elements You want To insert at End => ";

cin>>count;
for(int i=1;i<=count;i++){
    insertionAtend(&head);
    }/* code */
    break;
case 3 :
cout<<"\nelement You want To insert at Location => ";
int itemin;
cin>>itemin;
cout<<"ELEMENT YOU WANT TO INSERT";
int element;
cin>>element;
insertAfter(itemin,element,&head);
    /* code */
    break;
case 4 :
cout<<"\nNumber Of elements You want To Delete at Start => ";

cin>>count;
for(int i=1;i<=count;i++){
    deleteStart(&head);
    }/* code */
    break;
case 5 :
cout<<"\nNumber Of elements You want To Delete at end => ";
int itemout;
cin>>itemout;

   deletePos(&head,itemout);
    /* code */
    break;
case 6 :
cout<<"\n Elements You want To Delete From Pos  => ";
display(head);
cout<<" \n";
cin>>itemout;


      deletePos(&head,itemout);
    /* code */
    break;
case 7:
cout<<"\n Elements You want To Delete   => ";
  display(head);
  cout<<" \n";
  int itemele;
cin>>itemele;
deleteEle(&head,itemele);
    /* code */
    break;
case 8:
cout<<"\n View linked LIST   => ";
  display(head);
  break;
case 0 :
flag=1;
  break;

default:
    break;
}
  display(head); 
}

    return 0;
}

