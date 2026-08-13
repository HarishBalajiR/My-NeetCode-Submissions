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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* it1 = list1;
        ListNode* it2 = list2;
        ListNode* it3 = dummy;
        while(it1!=NULL && it2!=NULL){
            int val1 = it1->val, val2 = it2->val;
            if(val1==val2){
                ListNode* newnode1 = new ListNode(val1);
                ListNode* newnode2 = new ListNode(val2);
                it3->next = newnode1;
                newnode1->next = newnode2;
                it1 = it1->next;
                it2 = it2->next;
                it3 = it3->next->next;
            }
            else{
                if(val1 < val2){
                    ListNode* newnode1 = new ListNode(val1);
                    it3->next = newnode1;
                    it1 = it1->next;
                }
                else{
                    ListNode* newnode2 = new ListNode(val2);
                    it3->next = newnode2;
                    it2 = it2->next;
                }
                it3 = it3->next;
            }
        }
        while(it1!=NULL){
            ListNode* newnode = new ListNode(it1->val);
            it3->next = newnode;
            it1 = it1->next;
            it3 = it3->next;
        }
        while(it2!=NULL){
            ListNode* newnode = new ListNode(it2->val);
            it3->next = newnode;
            it2 = it2->next;
            it3 = it3->next;
        }
        return dummy->next;
    }
};
