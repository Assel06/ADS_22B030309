#include <iostream>
#include <climits>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

int findMaxSum(ListNode* head) {
    if (!head) {
        return 0;
    }

    int maxSum = INT_MIN;
    int currentSum = 0;

    ListNode* current = head;

    while (current) {
        currentSum += current->val;
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
        if (currentSum < 0) {
            currentSum = 0;
        }
        current = current->next;
    }

    return maxSum;
}

// Function to create a linked list from an array.
ListNode* createLinkedList(int arr[], int n) {
    if (n == 0) {
        return nullptr;
    }

    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;

    for (int i = 1; i < n; i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }

    return head;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ListNode* head = createLinkedList(arr, n);
    int maxSum = findMaxSum(head);

    cout << maxSum << endl;

    return 0;
}
