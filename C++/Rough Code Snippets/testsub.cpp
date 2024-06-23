#include <iostream>

#include<string.h>

using namespace std;

string stack[10];

int allow=10, top=-1;

void push(string item)
    {
        if(top>=allow-1)
            {
                cout<<"Stack Overrflow"<<endl;
            }
        else
            {
                top++;
                stack[top]=item;
            }
    }

void pop()
{
    if(top<=-1)
        {
            cout<<"Stack Underflow"<<endl;
        }
    else
        {
            cout<<stack[top]<<endl;
            top--;
        }
}

void display()
{
    if(top>=0)
        {
            for(int i=top;i>=0;i--)
                {
                    cout<<stack[i]<<" ";
            
                }
        }


    else
        {
            cout<<"\a Stack is empity";
        }
    
}



int main()
{

    int choice;

    string item;

    do{
        cin>>choice;
        switch(choice)
             {
                case 1:
                        {
                            cin>>allow;
                            for(int i=0;i<allow;i++)
                                {
                                    cin>>item;
                                    push(item);
                                }
                            break;
                        }
                case 2:
                        {
                            pop();
                            display();
                            break;
                        }
                default:
                        {
                            cout<<"Invalid choice";
                            break;
                        }
             }
    }
    while(choice!=2);
    

    return 0;
}