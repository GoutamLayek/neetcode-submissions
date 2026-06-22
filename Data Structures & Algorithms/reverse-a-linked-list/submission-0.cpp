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
    ListNode* reverseList(ListNode* head) {

        if(head == NULL || head -> next == NULL)
         return head;

        ListNode* prev = head;
        ListNode *curr = head -> next;
        ListNode * temp = NULL;
        head -> next = NULL;

        while(curr != NULL){

            temp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;

        }

        head = prev;

        return head;
        
    }
};
