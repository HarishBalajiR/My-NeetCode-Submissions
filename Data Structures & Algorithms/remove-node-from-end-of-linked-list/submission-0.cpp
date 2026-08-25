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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        int targetidx = len-n,curridx = 0;
        ListNode* it = head;
        ListNode* prev = new ListNode(-1);
        while(curridx < targetidx){
            curridx++;
            prev = it;
            it = it->next;
        }
        if(prev->val == -1) head = head->next;
        else prev->next = it->next;
        return head;
    }
};
