#include<iostream>
using namespace std;

#include<algorithm>

class Node {
public:
    int data;
    Node* prev;
    Node* next;
};

// Function to insert a node at the head of the linked list
Node* insertAtHead(Node* head, int data) {
    Node* temp = head;
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = temp;
    newNode->prev = NULL;
    if(head != NULL) {
        temp->prev = newNode;
    }
    head = newNode;
    return head;
}

// Function to insert a node at the tail of the linked list
Node* insertAtTail(Node* head , int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL) {
        head = newNode;
        return head;
    }
    else {
        Node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        return head;
    }
}

// Function to delete a node from the head of the linked list
Node* deleteAtHead(Node* head) {
    if (head == nullptr) { 
        return nullptr; // No elements to delete
    }

    Node* temp = head;
    head = head->next;

    if (head != nullptr) {
        head->prev = nullptr;
    }

    delete temp; // Deallocate the old head
    return head;
}

// Function to delete a node from the tail of the linked list
Node* deleteAtTail(Node* head) {
    Node* temp = head;
    if (head == nullptr) { 
        return nullptr; // No elements to delete
    }
    while (temp->next!= nullptr) {
        temp = temp->next;
    }
    temp->prev->next = nullptr;
    delete temp; // Deallocate the old tail

    return head;
  


}

// Function to print the linked list
Node* PrintList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << "->" << temp->data; 
        temp = temp->next;
    }
    return head;
}

// Function to insert a node at the middle of the linked list
Node* insertAtMiddle(Node* head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    Node* temp = head;
    int count = 0;
    if(temp != NULL) {
        while(temp->next != NULL) {
            count++;
            temp = temp->next;
        }
        int middlen = count / 2;

        temp = head;
        for(int i = 0; i < middlen; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        temp->next->prev = newNode;
    }
    return head;
}

// Function to delete a node from the middle of the linked list
Node* deleteAtMiddle(Node* head) {
    Node* temp = head;
    int count = 0;
    if(temp != NULL) {
        while(temp->next != NULL) {
            count++;
            temp = temp->next;
        }
        int middlen = count / 2;
        temp = head;
        for(int i = 0; i < middlen; i++) {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        temp->next->prev = temp;
        delete temp->next;
    }
    return head;
}

// Function to search for a node for deletion
Node* searchForDeletion(Node* head, int data) {
    Node* temp = head;
    while(temp != NULL) {
        if(temp->data == data) {
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            delete temp;
             }
        temp = temp->next;
    }
    return head;
}

// Function to search for a node for insertion
Node* searchForInsertion(Node* head,int Selement, int data) {
    Node* temp = head;
    while(temp != NULL) {
        if(temp->data == Selement) {
            Node* tempNode = new Node();
            tempNode->data = data;
            tempNode->next = temp->next;
            tempNode->prev = temp;
            temp->next = tempNode;
            temp->next->prev = tempNode;
            return head;
        }
        else {
            cout << "Error: Element not found";
        }
        temp = temp->next;
    }
    return head;
}




int main() {
    int size, i = 0, choice, element,Selement;
    bool flag = true;
    Node* head = nullptr;

    cout << "Welcome To Linked List " << endl;
    cout << "Enter the size of the list " << endl;
    cin >> size;

    for(i = 0; i < size; i++) {
        cout << "Enter The Element : " << i << endl;
        int onceValue = 0;
        cin >> onceValue;
        head = insertAtHead(head, onceValue);
    }

    cout << endl;

    cout << "Created linked list: ";
    cout << endl;

    PrintList(head);

    cout << endl;

    while(flag == true) {
    cout << " *_* Enter A Choice : " << endl;  
    cout << "1. Insert At Head" << endl;
    cout << "2. Insert At Tail" << endl;
    cout << "3. Delete At Head" << endl;
    cout << "4. Delete At Tail" << endl;
    cout << "5. Insert At Middle" << endl;
    cout << "6. Delete At Middle" << endl;
    cout << "7. Print List" << endl;
    cout << "8. Search for Deletion" << endl;
    cout << "9. Search for Insertion" << endl;
    cout << "0. Exit" << endl;
    cout << "The Updated Linked List is : " << endl;

    cout << endl;

    PrintList(head);

    cout << endl;
    cin >> choice;
     switch (choice) {
        case 1:
            cout << "Running..." << endl;
            cout << "Enter Data For Insertion At Head : " << endl;
            cin >> element;
            head = insertAtHead(head, element);
            cout << endl;
            PrintList(head);
            cout << endl;
            break;
        case 2:
            cout << "Running..." << endl;
            cout << "Enter Data For Insertion At Tail : " << endl;
            cin >> element;
            head = insertAtTail(head, element);
            cout << endl;
            PrintList(head);
            cout << endl;
            break;
        case 3:
            cout << "Running Deletion At Head..." << endl;
            head = deleteAtHead(head);
            break;
        case 4:
            cout << "Running Deletion At Tail..." << endl;
            head = deleteAtTail(head);
            break;
        case 5:
            cout << "Running..." << endl;
            cout << "Enter Data For Insertion At Middle : " << endl;
            cin >> element;
            head = insertAtMiddle(head, element);
            break;
        case 6:
            cout << "Running Deletion At Middle..." << endl;
            cout << "Delete At Middle : " << endl;
            head = deleteAtMiddle(head);
            cout<<"Deleted";
            cout<<PrintList(head);
            break;
        case 7:
            cout << "Printing Linked List..." << endl;
            head = PrintList(head);
            break;
        case 8:
            cout << "Running..." << endl;
            cout << "Enter Data For Searching for Deletion : " << endl;
            cin >> element;
            head = searchForDeletion(head, element);
            break;
        case 9:
            cout << "Running..." << endl;
            cout << "Enter Element For Searching : " << endl;
            
            cin>>Selement;
            cout<<"Enter Data For Insertion : " << endl;
            cin >> element;
            head = searchForInsertion(head, Selement,element);
            break;
        case 0:
            flag = false;
            break;
        default:
            cout << "Invalid Choice" << endl;
    }
    }
    
        cout << "--------------------------------" << endl;
        cout<<endl;
        return 0;
    }

