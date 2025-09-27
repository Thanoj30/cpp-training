#include <iostream>

// Definition for singly-linked list node
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to remove duplicates from a sorted linked list
Node* uniqueSortedList(Node* head) {
    if (head == nullptr)
        return nullptr;

    Node* curr = head;

    while (curr != nullptr) {
        if ((curr->next != nullptr) && curr->data == curr->next->data) {
            Node* next_next = curr->next->next;
            Node* nodeToDelete = curr->next;
            delete nodeToDelete;
            curr->next = next_next;
        } else {
            curr = curr->next;
        }
    }

    return head;
}

// Helper function to insert a new node at the end
void insertAtTail(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Helper function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

// Helper function to free the linked list memory
void freeList(Node* head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = nullptr;

    // Example: 1->1->2->3->3->4->4->4->5
    int arr[] = {1, 1, 2, 3, 3, 4, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; ++i) {
        insertAtTail(head, arr[i]);
    }

    std::cout << "Original list: ";
    printList(head);

    head = uniqueSortedList(head);

    std::cout << "List after removing duplicates: ";
    printList(head);

    freeList(head);

    return 0;
}