#include <iostream>

// Definition for singly-linked list node
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to sort a linked list of 0s, 1s and 2s
Node* sortList(Node* head) {
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    Node* temp = head;

    // Count the number of 0s, 1s and 2s
    while (temp != nullptr) {
        if (temp->data == 0)
            zeroCount++;
        else if (temp->data == 1)
            oneCount++;
        else if (temp->data == 2)
            twoCount++;
        temp = temp->next;
    }

    temp = head;
    // Overwrite the linked list with 0s, then 1s, then 2s
    while (temp != nullptr) {
        if (zeroCount != 0) {
            temp->data = 0;
            zeroCount--;
        } else if (oneCount != 0) {
            temp->data = 1;
            oneCount--;
        } else if (twoCount != 0) {
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }
    return head;
}

// Function to insert a new node at the end
Node* insertEnd(Node* head, int val) {
    Node* newNode = new Node(val);
    if (!head) return newNode;
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
    return head;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = nullptr;
    // Example: 2->1->0->2->1->0
    head = insertEnd(head, 2);
    head = insertEnd(head, 1);
    head = insertEnd(head, 0);
    head = insertEnd(head, 2);
    head = insertEnd(head, 1);
    head = insertEnd(head, 0);

    std::cout << "Original list: ";
    printList(head);

    head = sortList(head);

    std::cout << "Sorted list: ";
    printList(head);

    // Free memory
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}