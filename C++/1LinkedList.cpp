#include<iostream>
using namespace std;

#include<algorithm>
/*
Global Variables

Node head:
Type: Node* (pointer to a Node object)
Purpose: Stores a reference to the first node in the doubly linked list, acting as the starting point.
Variables within main()

size:

Type: int
Purpose: Determines the number of elements to be initially inserted into the linked list.
i:

Type: int
Purpose: Serves as a loop counter during the initial linked list creation.
choice:

Type: int
Purpose: Stores the user's menu selection to control the operations performed on the linked list.
element:

Type: int
Purpose: Temporarily holds the data value to be inserted into the linked list.
Selement:

Type: int
Purpose: Stores the data value of the Node to be searched for before insertion in the searchForInsertion function.
flag:

Type: bool
Purpose: Acts as a control variable for the main menu loop. When true, the menu continues to display; when false, the loop and the program terminate.
onceValue

Type: int
Purpose: Temporarily holds the value entered by the user during the initial creation of the linked list.
Variables within Functions

All functions (e.g., insertAtHead, insertAtTail, etc.)

data:
Type: int
Purpose: Represents the data value to be stored in a new node.
Node Functions (e.g., insertAtHead, insertAtTail, etc.)

newNode:
Type: Node* (pointer to a Node object)
Purpose: Holds the reference (memory address) of a newly created Node during insertion operations.
Many Functions (e.g., insertAtHead, deleteAtHead, searchForDeletion, etc.)

temp:
Type: Node* (pointer to a Node object)
Purpose: Used for iterating through the linked list by temporarily storing the reference of nodes as you traverse the list.
Remember:

Doubly linked list implementation: My code effectively uses a doubly linked list, where each node has references to both the next and prev nodes in the sequence.
Importance of comments: Clear comments are crucial for making My code easier to read and maintain, both for Myself and others.
*/

// Node Class: Represents a node in the doubly linked list.
class Node {
public:
    int data;       // Data stored in the node.
    Node* prev;     // Pointer to the previous node.
    Node* next;     // Pointer to the next node.
};

// Function insertAtHead: Inserts a new node with given data at the head of the linked list.
Node* insertAtHead(Node* head, int data) {
    Node* temp = head;                      // Store current head node.
    Node* newNode = new Node();             // Create a new node.
    newNode->data = data;                   // Assign data to the new node.
    newNode->next = temp;                   // Set the next of the new node to the current head.
    newNode->prev = NULL;                   // Since it's inserted at the head, its previous is NULL.
    if (head != NULL) {                     // If list is not empty,
        temp->prev = newNode;               // Set previous of current head to the new node.
    }
    head = newNode;                         // Update head to the new node.
    return head;                            // Return the updated head.
}

// Function insertAtTail: Inserts a new node with given data at the tail of the linked list.
Node* insertAtTail(Node* head, int data) {
    Node* newNode = new Node();             // Create a new node.
    newNode->data = data;                   // Assign data to the new node.
    newNode->next = NULL;                   // As it will be the last node, its next is NULL.
    if (head == NULL) {                     // If list is empty,
        head = newNode;                     // Assign new node as head.
        return head;
    } else {
        Node* temp = head;                  // Store head in a temporary variable.
        while (temp->next != NULL) {        // Traverse till the last node.
            temp = temp->next;
        }
        temp->next = newNode;               // Set next of last node to the new node.
        newNode->prev = temp;               // Set previous of new node to the previous last node.
        return head;
    }
}

// Function deleteAtHead: Deletes the node at the head of the linked list.
Node* deleteAtHead(Node* head) {
    if (head == nullptr) {                  // If list is empty,
        return nullptr;                     // Return nullptr as there's no element to delete.
    }

    Node* temp = head;                      // Store current head node.
    head = head->next;                      // Move head to the next node.
    if (head != nullptr) {                  // If there's a node after the current head,
        head->prev = nullptr;               // Set its previous to nullptr.
    }
    delete temp;                            // Deallocate memory for old head.
    return head;                            // Return the updated head.
}

// Function deleteAtTail: Deletes the node at the tail of the linked list.
Node* deleteAtTail(Node* head) {
    Node* temp = head;                      // Store head in a temporary variable.
    if (head == nullptr) {                  // If list is empty,
        return nullptr;                     // Return nullptr as there's no element to delete.
    }
    while (temp->next != nullptr) {         // Traverse till the last node.
        temp = temp->next;
    }
    temp->prev->next = nullptr;             // Set the next of second last node to nullptr.
    delete temp;                            // Deallocate memory for old tail node.
    return head;
}

// Function PrintList: Prints the elements of the linked list.
Node* PrintList(Node* head) {
    Node* temp = head;                      // Start from the head.
    while(temp != NULL) {                   // Traverse till the end of the list.
        cout << "->" << temp->data;         // Print the data of the current node.
        temp = temp->next;                  // Move to the next node.
    }
    return head;                            // Return the head.
}

// Function insertAtMiddle: Inserts a new node with given data at the middle of the linked list.
Node* insertAtMiddle(Node* head, int data) {
    Node* newNode = new Node();             // Create a new node.
    newNode->data = data;                   // Assign data to the new node.
    Node* temp = head;                      // Start from the head.
    int count = 0;                          // Initialize a counter.
    if(temp != NULL) {                      // If list is not empty,
        while(temp->next != NULL) {         // Traverse till the end of the list to count nodes.
            count++;                        // Increment counter for each node.
            temp = temp->next;              // Move to the next node.
        }
        int middle = count / 2;             // Calculate the middle index.
        temp = head;                        // Reset temp to head.
        for(int i = 0; i < middle; i++) {   // Traverse to the middle node.
            temp = temp->next;
        }
        newNode->next = temp->next;         // Set the next of new node to the next of middle node.
        temp->next = newNode;               // Set the next of middle node to the new node.
        newNode->prev = temp;               // Set the previous of new node to the middle node.
        temp->next->prev = newNode;         // Set the previous of the next of new node to the new node.
    }
    return head;                            // Return the head.
}

// Function deleteAtMiddle: Deletes the node at the middle of the linked list.
Node* deleteAtMiddle(Node* head) {
    Node* temp = head;                      // Start from the head.
    int count = 0;                          // Initialize a counter.
    if(temp != NULL) {                      // If list is not empty,
        while(temp->next != NULL) {         // Traverse till the end of the list to count nodes.
            count++;                        // Increment counter for each node.
            temp = temp->next;              // Move to the next node.
        }
        int middle = count / 2;             // Calculate the middle index.
        temp = head;                        // Reset temp to head.
        for(int i = 0; i < middle; i++) {   // Traverse to the middle node.
            temp = temp->next;
        }
        temp->next = temp->next->next;      // Set the next of middle node to the node after the next node.
        temp->next->prev = temp;            // Set the previous of the next node to the middle node.
        delete temp->next;                  // Deallocate memory for the middle node.
    }
    return head;                            // Return the head.
}

// Function searchForDeletion: Searches for a node with given data and deletes it from the linked list.
Node* searchForDeletion(Node* head, int data) {
    Node* temp = head;                      // Start from the head.
    while(temp != NULL) {                   // Traverse till the end of the list.
        if(temp->data == data) {            // If data matches with current node's data.
            temp->prev->next = temp->next;  // Set the next of previous node to the next of current node.
            temp->next->prev = temp->prev;  // Set the previous of next node to the previous of current node.
            delete temp;                    // Deallocate memory for the current node.
        }
        temp = temp->next;                  // Move to the next node.
    }
    return head;                            // Return the head.
}

// Function searchForInsertion: Searches for a node with a given data for insertion.
Node* searchForInsertion(Node* head,int Selement, int data) {
    Node* temp = head;                      // Start from the head.
    while(temp != NULL) {                   // Traverse till the end of the list.
        if(temp->data == Selement) {        // If data matches with current node's data.
            Node* tempNode = new Node();    // Create a new node.
            tempNode->data = data;          // Assign data to the new node.
            tempNode->next = temp->next;    // Set the next of new node to the next of current node.
            tempNode->prev = temp;          // Set the previous of new node to the current node.
            temp->next = tempNode;          // Set the next of current node to the new node.
            temp->next->prev = tempNode;    // Set the previous of the next of current node to the new node.
            return head;                    // Return the head.
        }
        else {
            cout << "Error: Element not found"; // Display error message if element not found.
        }
        temp = temp->next;                  // Move to the next node.
    }
    return head;                            // Return the head.
}

// main Function: Entry point of the program.
int main() {
    int size, i = 0, choice, element,Selement;
    bool flag = true;
    Node* head = nullptr;                   // Initialize head pointer to nullptr.

    cout << "Welcome To Linked List " << endl;
    cout << "Enter the size of the list " << endl;
    cin >> size;                            // Input the size of the list.

    for(i = 0; i < size; i++) {
        cout << "Enter The Element : " << i << endl;
        int onceValue = 0;
        cin >> onceValue;
        head = insertAtHead(head, onceValue); // Insert elements at the head of the list.
    }

    cout << endl;
    cout << "Created linked list: ";
    cout << endl;
    PrintList(head);                        // Print the created linked list.

    cout << endl;

    while(flag == true) {                   // Menu-driven interface for performing operations on the linked list.
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
        cin >> choice;                      // Input the choice.

        switch (choice) {                   // Perform operation based on user's choice.
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
                cin >> Selement;
                cout << "Enter Data For Insertion : " << endl;
                cin >> element;
                head = searchForInsertion(head, Selement, element);
                break;
            case 0:
                flag = false;               // Exit the loop if choice is 0.
                break;
            default:
                cout << "Invalid Choice" << endl; // Display error message for invalid choice.
        }
    }
    
    cout << "--------------------------------" << endl;
    cout << endl;
    return 0;
}
