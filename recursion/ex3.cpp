#include <iostream>
using namespace std;

// Definition of a linked list node
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to reverse the linked list recursively
void reverse(Node** head) {
    // Base case: If the list is empty or has only one node
    if (*head == nullptr || (*head)->next == nullptr)
        return;

    // Recursive call for the rest of the list
    Node* rest = (*head)->next;
    reverse(&rest);

    // Update the next pointer of the current node
    (*head)->next->next = *head;
    (*head)->next = nullptr;

    // Update the head pointer
    *head = rest;
}

// Function to print the linked list
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to append a new node to the list
void append(Node** head, int val) {
    Node* newNode = new Node(val);
    if (*head == nullptr) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
}

// Main function to test the reverse function
int main() {
    Node* head = nullptr;

    // Create a list: 1 -> 2 -> 3 -> 4
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);

    cout << "Original list: ";
    printList(head);

    // Reverse the list
    reverse(&head);

    cout << "Reversed list: ";
    printList(head);

    return 0;
}
