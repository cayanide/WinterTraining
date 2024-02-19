#include "bits/stdc++.h"
using namespace std;

class Node {
public:
  int id;
  string name;
  int due_fee;
  Node *next;

  Node(int id, string name, int due_fee) {
    this->id = id;
    this->name = name;
    this->due_fee = due_fee;
    next = NULL;
  }
};

Node *head = NULL;
Node *tail = NULL;

void append(int id, string name, int due_fee) {
  Node *new_node = new Node(id, name, due_fee);
  if (head == NULL) {
    head = new_node;
    tail = new_node;
  } else {
    tail->next = new_node;
    tail = tail->next;
  }
}

void print_link_list(Node *head) {
  Node *temp = head;

  while (temp != NULL) {
    cout << "id: " << temp->id << " name: " << temp->name
         << " due_fee: " << temp->due_fee << endl;
    temp = temp->next;
  }
}

int count_students() {
  Node *temp = head;
  int count = 0;

  while (temp != NULL) {
    if (temp->due_fee > 25000) {
      cout << temp->id << " " << temp->name << " " << temp->due_fee << endl;
      count++;
    }
    temp = temp->next;
  }
  return count;
}

int main() {

  int id, due_fee, n;
  string name;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> id >> name >> due_fee;
    append(id, name, due_fee);
  }
  // print_link_list(head);

  int number_of_defaulters = count_students();

  if (not number_of_defaulters) {
    cout << "Students does not have fee due more than 25000";
  }
}