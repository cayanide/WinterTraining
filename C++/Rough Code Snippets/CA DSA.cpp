INSERTION-SORT-1-21482

#include"iostream"
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int ar[n];
    int first=0;
    int j;
    if(n>0 && n<25)
    {
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(i=0;i<n;i++)
        {
           first=ar[i]; 
            j=i-1;
            while(first<ar[j] && j>=0)
            {
                ar[j+1]=ar[j];
                --j;
            }
            ar[j+1]=first;
        }
        for(i=0;i<n;i++)
        {
            cout<<ar[i]<<" ";
        }
    }
}



========================================BINARY_SEARCH_2_16856========================================

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int binary_search(int arr[], int n, int element)
{
    int start_index = 0;
    int end_index = n;
    
    while(start_index <= end_index)
    {
        int mid = (start_index + end_index)/2;
        
        if(arr[mid] == element)
        {
            return mid;
        }
        else if(arr[mid] > element)
        {
            end_index = mid - 1;   
        }
        else if(arr[mid] < element)
        {
            start_index = mid + 1;
        }
        // cout<<start_index<<" "<<end_index<<endl;
    }
    return -1;
}

int main() {
    int size;
    cin>>size;
    
    int arr[size];
    
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int element_to_find;
    cin>>element_to_find;
    
    int result = binary_search(arr, size, element_to_find);
    
    cout<<result;
}


================================================LinkedListSearching1_24906===========================================================

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


==========================STACK_APPLICATION_1_26121==========================================

#include"bits/stdc++.h" 
using namespace std; 

bool balance(string expr) 
{ 
    stack<char> s; 
    char x; 
 
    for (int i=0; i<expr.length(); i++) 
    { 
        if (expr[i]=='('||expr[i]=='['||expr[i]=='{') 
        { 
            s.push(expr[i]); 
            continue; 
        } 

        if (s.empty()) 
           return false; 
  
        switch (expr[i]) 
        { 
        case ')': 
            x = s.top(); 
            s.pop(); 
            if (x=='{' || x=='[') 
                return false; 
            break; 
  
        case '}': 
  
            x = s.top(); 
            s.pop(); 
            if (x=='(' || x=='[') 
                return false; 
            break; 
  
        case ']': 

            x = s.top(); 
            s.pop(); 
            if (x =='(' || x == '{') 
                return false; 
            break; 
        } 
    } 
    return (s.empty()); 
} 

int main() 
{
  string expr;
  cout<<"";
  cin>>expr;
    if (balance(expr)) 
        cout << "Balanced"; 
    else
        cout << "Not Balanced"; 
    return 0; 
}

===============================================QUEUE_1_22176==============================

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    if(n>15 || n<=2)
    {
        printf("Invalid Queue range");
    }
    else
    {
        int queue[15];
        int front=-1,rear=-1;
        for (int i = 0; i < n; i++)
        {
            if (front == -1) 
            {
                front = 0;
                rear = 0;
            } 
            else 
            {
                 if (rear == n - 1)
                rear = 0;
                else
                rear = rear + 1;
            }
            int val;
            scanf("%d",&val);
            queue[i]=val;
        }
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if (queue[i]%2==0)
            {
                count=count+1;
                printf("%d ",queue[i]);
            }
        }
        if(count==0)
        {
            printf("No even element is there");
        }
    }
    return 0;
}
