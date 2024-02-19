#include <iostream> 
using namespace std; 
 
struct node 
{ 
 char grade; 
 int roll_number; 
 node *next; 
}; 
 
node *start = NULL, *nptr, *ptr; 
 
 
void add_node() 
{ 
 nptr=new node; 
 cin>>nptr->roll_number; 
 cin>>nptr->grade; 
 if(start==NULL) 
 { 
 start=nptr; 
 nptr->next=NULL; 
 } 
 else 
 { 
 nptr->next=start; 
 start=nptr; 
 } 
 
} 
 
void search(int roll) 
{ 
 ptr=start; 
 while(ptr->roll_number!=roll && ptr->next!=NULL) 
 { 
 ptr=ptr->next; 
 } 
 if(ptr->roll_number==roll) 
 { 
 cout<<"You have secured "<<ptr->grade<<" grade"; 
 } 
 else 
 { 
 cout<<"You have not appeared for the Contest-1"; 
 } 
} 
 
int main() 
{ 
 int n,i,j; 
 cin>>n; 
 if(n>=0) 
 { 
 if(n==0) 
 { 
 cout<<"You have not appeared for the Contest-1"; 
 return 0; 
 } 
 for(i=0;i<n;i++) 
 { 
 add_node(); 
 } 
 cin>>j; 
 search(j); 
 } 
 
 return 0; 
}