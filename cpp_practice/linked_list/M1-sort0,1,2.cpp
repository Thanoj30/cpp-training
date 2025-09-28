#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Helper function to insert at tail
void insertAtTail(Node*& tail, Node* curr) {
    tail->next = curr;
    tail = curr;
}

// Function to sort the linked list of 0s, 1s and 2s
Node* sortList(Node* head) {
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    Node* curr = head;

    // Create 3 sublists
    while (curr != NULL) {
        int value = curr->data;
        if (value == 0) {
            insertAtTail(zeroTail, curr);
        }
        else if (value == 1) {
            insertAtTail(oneTail, curr);
        }
        else {
            insertAtTail(twoTail, curr);
        }
        curr = curr->next;
    }

    // Merge 3 sublists
    if (oneHead->next != NULL) {
        zeroTail->next = oneHead->next;
    }
    else {
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head = zeroHead->next;

    // Delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}

// Function to print the linked list
void printList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

// Function to insert node at end
void insertEnd(Node*& head, int val) {
    if (head == NULL) {
        head = new Node(val);
        return;
    }
    Node* curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new Node(val);
}

int main() {
    Node* head = NULL;
    // Example: 1->2->0->1->2->0->1
    insertEnd(head, 1);
    insertEnd(head, 2);
    insertEnd(head, 0);
    insertEnd(head, 1);
    insertEnd(head, 2);
    insertEnd(head, 0);
    insertEnd(head, 1);

    cout << "Original List: ";
    printList(head);

    head = sortList(head);

    cout << "Sorted List: ";
    printList(head);

    // Free memory
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
