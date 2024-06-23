#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Node
{
    int data;
    Node *next;
    friend class C_linked_list;
    
    public:
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class C_linked_list
{
    Node *head;
    Node *tail;
    
    public:
    C_linked_list()
    {
        head = NULL;
        tail = NULL;
    }
    
    void insert(int value)
    {
        Node *nd = new Node(value);
        if (head == NULL)
        {
            head = nd;
            nd->next = head;
            tail = nd;
        }
        else
        {
            nd->next = head;
            tail->next = nd;
            tail = nd;
        }
    }
    
    void traverse()
    {
        Node *p = head;
        int count = 0;
        
        while (p->next != head)
        {
            if (p->data % 2 == 0)
            {
                count++;
                Node *ptr = head;
                for (int i = 0; i < count; i++)
                {
                    if (ptr->data % 2 == 0)
                    {
                        cout << ptr->data << " ";
                    }
                    else
                    {
                        i--;
                    }
                    ptr = ptr->next;
                }
                cout << "\n";
            }
            p = p->next;
        }
        if (p->data % 2 == 0)
        {
            count++;
            Node *ptr = head;
            for (int i = 0; i < count; i++)
            {
                if (ptr->data % 2 == 0)
                {
                    cout << ptr->data << " ";
                }
                else
                {
                    i--;
                }
                ptr = ptr->next;
            }
            cout << "\n";
        }
    }
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n{};
    cin >> n;
    C_linked_list o;
    for (int i = 0; i < n; i++)
    {
        int value{};
        cin >> value;
        o.insert(value);
    }
    o.traverse();
    return 0;
}