#include <iostream>
#include<string.h>

using namespace std;
string stack[10];
int b=10, top=-1;
void push(string val)
{

    top++;
        stack[top]=val;
    
}

void pop()
{

    
        cout<<stack[top]<<endl;
        top--;
    
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

}



int main()
{
    int ch;
    string val;
    do{
        cin>>ch;
        switch(ch)
        {
            case 1:{
                cin>>b;
                for(int i=0;i<b;i++)
                {
                    cin>>val;
                    push(val);
                }
                break;
            }
            case 2:{
                pop();
                display();
                break;
            }
            default:{
                cout<<"Invalid choice";
                break;
            }
        }
    }
    while(ch!=2);
    

    return 0;
}