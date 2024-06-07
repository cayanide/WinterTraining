#include<iostream>
using namespace std;
#define MAX 100
int top = -1;
int stack_array[MAX];
void push(int data) {
top = top+1;
  stack_array[top] = data;

}

void pop() {
    cout<<"The Element Popped Out is : "<<stack_array[top]<<endl;
top = top-1;
}

void display() {
    cout<<"The Stack is : ";
    for(int i=top;i>=0;i--) {
        cout<<stack_array[i]<<" ";
    }
    cout<<endl;
}

int main(){

int size;

cout<<"Enter the size of the stack : "<<endl;

cin>>size;

cout<<endl;

for(int i=0;i<size;i++)
{
    int data;
    cout<<"Enter the data : "<<endl;
    cin>>data;
    push(data);
}

cout<<endl;

display();

cout<<"Do you want to Pop the Top Element? (0 For No / 1 For Yes) : "<<endl;

int choice;

cin>>choice;

if(choice == 1){


    pop();
cout<<endl;
display();
}

while(choice!=4)
{
    cout<<endl;
    display();
    cout<<"Enter A choice";
    cout<<endl;
    cout<<"1.Push"<<endl;
    cout<<"2.Pop"<<endl;
    cout<<"3.Display"<<endl;
    cout<<"4.Exit"<<endl;

    cin>> choice;
    switch(choice) {
        case 1:
            int data;
            cout<<"Enter the data : "<<endl;
            cin>>data;
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            cout<<"Invalid Choice"<<endl;
            break;
    

}
}
return 0;
}


