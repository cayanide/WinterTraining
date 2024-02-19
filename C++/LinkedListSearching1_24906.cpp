#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};
int smallestElement(struct Node* head)
{
    int min = INT_MAX;
    while (head != NULL) {
        if (min > head->data)
            min = head->data;

        head = head->next;
    }
    return min;
}
void push(struct Node** head, int data)
{
    struct Node* newNode =
        (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = (*head);
    (*head) = newNode;
}

int main()
{
    int i,n;
    struct Node* head = NULL;
    for(i=0;i<5;i++){
        cin>>n;
        push(&head,n);
    }
    cout << smallestElement(head) << endl;

    return 0;
}