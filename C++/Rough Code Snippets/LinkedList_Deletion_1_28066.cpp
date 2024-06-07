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

void print()
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data;
}

int get_index_max_element()
{
    int max = head->data;
    int max_index = 0;
    int index = 0;
    Node *temp = head;

    while (temp)
    {
        if (temp->data > max)
        {
            max = temp->data;
            max_index = index;
        }
        index++;
        temp = temp->next;
    }
    return max_index;
}

void delete_at_index(int index)
{
    if (index != 0)
    {
        Node *prev = NULL;
        Node *curr = head;
        while (index > 0 && curr)
        {
            prev = curr;
            curr = curr->next;
            index--;
        }
        Node *temp = curr;
        prev->next = curr->next;
        delete temp;
    }
    else
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        append(ele);
    }

    int index = get_index_max_element();

    delete_at_index(index);
    print();
}