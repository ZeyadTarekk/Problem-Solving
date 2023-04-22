/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> ans;
        while(headA){
            ans.insert(headA);
            headA = headA->next;
        }
        while(headB){
            if(ans.find(headB)!=ans.end())
                return headB;
            headB = headB->next;
        }
        return nullptr;
    }
};