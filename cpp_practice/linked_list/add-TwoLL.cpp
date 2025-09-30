#include <iostream>
using namespace std;

// Definition of Node
struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Solution
{
private:
    // Function to reverse a linked list
    Node* reverse(Node* head) {
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    // Insert node at tail of linked list
    void insertAtTail(Node* &head, Node* &tail, int val) {
        Node* temp = new Node(val);

        // If list is empty
        if (head == NULL) {
            head = temp;
            tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
    }

    // Function to add two reversed linked lists
    Node* add(Node* first, Node* second) {
        int carry = 0;
        Node* ansHead = NULL;
        Node* ansTail = NULL;

        while (first != NULL || second != NULL || carry != 0) {
            int val1 = 0;
            if (first != NULL) {
                val1 = first->data;
                first = first->next;
            }

            int val2 = 0;
            if (second != NULL) {
                val2 = second->data;
                second = second->next;
            }

            int sum = carry + val1 + val2;
            int digit = sum % 10;

            // Create node for the digit
            insertAtTail(ansHead, ansTail, digit);

            carry = sum / 10;
        }
        return ansHead;
    }

public:
    // Function to add two numbers represented by linked lists
    Node* addTwoLists(Node* first, Node* second) {
        // Step 1: Reverse input lists
        first = reverse(first);
        second = reverse(second);

        // Step 2: Add both reversed lists
        Node* ans = add(first, second);

        // Step 3: Reverse the result list
        ans = reverse(ans);

        return ans;
    }
};

// Utility function to print a linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data;
        if (head->next != NULL) cout << " ";
        head = head->next;
    }
    cout << endl;
}

// Example usage
int main() {
    // First number: 7243 (represented as 7->2->4->3)
    Node* first = new Node(7);
    first->next = new Node(2);
    first->next->next = new Node(4);
    first->next->next->next = new Node(3);

    // Second number: 564 (represented as 5->6->4)
    Node* second = new Node(5);
    second->next = new Node(6);
    second->next->next = new Node(4);

    Solution obj;
    Node* result = obj.addTwoLists(first, second);

    // Print result: should be 7807 (7->8->0->7)
    printList(result);

    return 0;
}