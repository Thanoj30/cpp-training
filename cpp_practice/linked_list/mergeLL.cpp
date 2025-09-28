#include <iostream>
// Definition for singly-linked list node
struct Node {
    int data;
    Node* next;
    Node(int val) : 
    data(val), 
    next(nullptr) {}
};

Node* solve(Node* first, Node* second) {
    if (first->next == nullptr) {
        first->next = second;
        return first;
    }
    Node* curr1 = first;
    Node* next1 = curr1->next;
    Node* curr2 = second;
    Node* next2 = nullptr;

    while (next1 != nullptr && curr2 != nullptr) {
        if ((curr2->data >= curr1->data) && (curr2->data <= next1->data)) {
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            curr1 = curr2;
            curr2 = next2;
        } else {
            curr1 = next1;
            next1 = next1->next;
            if (next1 == nullptr) {
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node* sortTwoLists(Node* first, Node* second) {
    if (first == nullptr)
        return second;
    if (second == nullptr)
        return first;
    if (first->data <= second->data) {
        return solve(first, second);
    } else {
        return solve(second, first);
    }
}

// Helper function to create a linked list from an array
Node* createList(const int arr[], int n) {
    if (n == 0) return nullptr;
    Node* head = new Node(arr[0]);
    Node* curr = head;
    for (int i = 1; i < n; ++i) {
        curr->next = new Node(arr[i]);
        curr = curr->next;
    }
    return head;
}

// Helper function to print a linked list
void printList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data;
        if (head->next) std::cout << " -> ";
        head = head->next;
    }
    std::cout << std::endl;
}

// Helper function to delete a linked list and free memory
void deleteList(Node* head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8, 10};

    Node* list1 = createList(arr1, 4);
    Node* list2 = createList(arr2, 5);

    std::cout << "List 1: ";
    printList(list1);
    std::cout << "List 2: ";
    printList(list2);

    Node* merged = sortTwoLists(list1, list2);

    std::cout << "Merged List: ";
    printList(merged);

    deleteList(merged);

    return 0;
}