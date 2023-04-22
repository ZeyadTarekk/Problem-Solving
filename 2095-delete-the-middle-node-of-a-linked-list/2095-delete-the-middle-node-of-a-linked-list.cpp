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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow = head;
        if(!head->next)
            return nullptr;
        ListNode* fast = head->next->next;
       
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        cout<<slow->val<<endl;
        // if(slow->next)
        slow->next = slow->next->next;

        return head;

    }
};