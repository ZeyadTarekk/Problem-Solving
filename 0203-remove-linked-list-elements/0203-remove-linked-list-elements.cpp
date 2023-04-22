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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)
            return nullptr;
        ListNode* dum = new ListNode(0,head);
        ListNode* prev = dum;
        ListNode* cur = head;
        while(cur){
            if(cur->val == val){
                prev->next = cur->next;
            }else {
                prev = prev->next;
            }
            cur = cur->next;
        }

        return dum->next;

    }
};