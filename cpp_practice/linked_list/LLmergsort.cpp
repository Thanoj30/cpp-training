#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int d) {
        data = d;
        next = NULL;
    }
};

node* findMid(node* head) {
    node* slow = head;
    node* fast = head->next;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

node* merge(node* left, node* right) {
    if (left == NULL)
        return right;

    if (right == NULL)
        return left;

    node* ans = new node(-1);
    node* temp = ans;

    // merge 2 sorted Linked List
    while (left != NULL && right != NULL) {
        if (left->data < right->data) {
            temp->next = left;
            temp = left;
            left = left->next;
        } else {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    while (left != NULL) {
        temp->next = left;
        temp = left;
        left = left->next;
    }

    while (right != NULL) {
        temp->next = right;
        temp = right;
        right = right->next;
    }

    ans = ans->next;
    delete temp; // optional: free dummy node
    return ans;
}

node* mergeSort(node* head) {
    // base case
    if (head == NULL || head->next == NULL) {
        return head;
    }

    // break linked list into 2 halves, after finding mid
    node* mid = findMid(head);

    node* left = head;
    node* right = mid->next;
    mid->next = NULL;

    // recursive calls to sort both halves
    left = mergeSort(left);
    right = mergeSort(right);

    // merge both left and right halves
    node* result = merge(left, right);

    return result;
}

// Helper function to insert node at tail
void insertAtTail(node*& head, int data) {
    node* n = new node(data);
    if (head == NULL) {
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

// Helper function to print linked list
void printList(node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    node* head = NULL;
    int n, val;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        insertAtTail(head, val);
    }

    cout << "Original List: ";
    printList(head);

    head = mergeSort(head);

    cout << "Sorted List: ";
    printList(head);

    // Free memory
    while (head != NULL) {
        node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}