/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) { // Changed return type to ListNode*
        ListNode* next = head, *curr = head, *prev = NULL;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev; // Returning the head of the reversed list
    }

    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* right = reverseList(slow->next); // Corrected function call
        ListNode* a = head;
        ListNode* b = right;
        while (b) {
            if (a->val != b->val) // Compare values, not pointers
                return false;
            a = a->next;
            b = b->next;
        }
        return true;
    }
};