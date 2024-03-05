#include<iostream>

using namespace std;

struct Node{
int info;
struct Node  *plink;
struct Node  *flink;
    
};

int item;
Node *head =NULL,*tail=NULL,*ptr,*nptr;
void display(){

}


void insert_atstart(struct Node** head){
cout<<"Enter Item";
cin>>item;
 struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
nptr = new Node;
nptr->info = item;
cout<<"\n Node Inserted";

if(*head==NULL){
nptr->plink=NULL;
nptr->flink=NULL;
*head=nptr;
cout<<"Node Inserted";

}else{
    nptr->plink = NULL;
    nptr->flink = *head;
    *head->plink = nptr;
    *head=nptr;
    cout<<"\n Node Inserted";

}
}
int main(){
    
    cout<<"Enter Number Of Elements";
    int count;
    cin>>count;
    for(int i=1;i<=count;i++){
        insert_atstart(&head);
    }

for(int i =0; i=-1;i++){
cout<<"Press 1 For Traversing";
cout<<"Press 2 For Insertion At Start";
cout<<"Press 0 For Exit";

    int n;
    cin>>n;

    switch (n)
    {
    case 0:
    exit(0);
    break;

    case 1:
        /* code */
        break;
    case 2:
     insert_atstart(&head);
    break;
    case 3:
     insert_atstart(&head);
    break;
    
    default:
        break;
    }
}
}