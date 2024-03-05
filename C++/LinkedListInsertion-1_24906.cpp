#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node *head = NULL;
Node *tail = NULL;

void append(int data)
{
    Node *new_node = new Node(data);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        tail = tail->next;
    }
}

int add_at_pos(int pos, int data)
{
    Node *new_node = new Node(data);
    if (pos == 0)
    {
        new_node->next = head;
        head = new_node;
        return 0;
    }

    Node *temp = head;
    while (pos > 1 && temp)
    {
        temp = temp->next;
        pos--;
    }

    new_node->next = temp->next;
    temp->next = new_node;
    return 0;
}

void print()
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    for (int i = 0; i < 5; i++)
    {
        int ele;
        cin >> ele;
        append(ele);
    }
    int n;
    cin >> n;
    int dataa;
    cin >> dataa;
    add_at_pos(n - 1, dataa);
    print();
}