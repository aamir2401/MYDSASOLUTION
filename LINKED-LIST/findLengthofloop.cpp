#include <iostream>

// Definition for singly-linked list node.
struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(NULL) {}
};

class Solution {
public:
    // Function to detect and count the number of nodes in a loop.
    int countNodesinLoop(Node* head) {
        Node* slow = head;
        Node* fast = head;

        // Using Floyd's Cycle-Finding Algorithm to detect the cycle.
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            // Cycle detected
            if (slow == fast) {
                return countLoopLength(slow);
            }
        }

        // No cycle found
        return 0;
    }

private:
    // Function to count the length of the cycle.
    int countLoopLength(Node* loopNode) {
        Node* temp = loopNode;
        int count = 1;

        // Traverse the cycle to count the number of nodes.
        while (temp->next != loopNode) {
            count++;
            temp = temp->next;
        }

        return count;
    }
};

// Utility function to create a new node
Node* newNode(int data) {
    Node* temp = new Node(data);
    return temp;
}

int main() {
    // Example to test the function
    int N = 10;
    int values[] = {25, 14, 19, 33, 10, 21, 39, 90, 58, 45};
    int C = 4;

    Node* head = newNode(values[0]);
    Node* tail = head;
    for (int i = 1; i < N; i++) {
        tail->next = newNode(values[i]);
        tail = tail->next;
    }

    // Creating a loop
    if (C != 0) {
        Node* temp = head;
        for (int i = 1; i < C; i++) {
            temp = temp->next;
        }
        tail->next = temp;
    }

    Solution sol;
    int loopLength = sol.countNodesinLoop(head);
    std::cout << "Length of the loop is: " << loopLength << std::endl;

    return 0;
}
