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
        ListNode ans(0);
        ListNode *t = &ans;

        while(list1 && list2){
            
            if(list1->val <= list2->val){
                // cout<<"Entered first if\n";
                t->next = new ListNode(list1->val);
                list1 = list1->next;
                t = t->next;
            }else {
                // cout<<"Entered second if\n";
                t->next = new ListNode(list2->val);
                list2 = list2->next;
                t = t->next;
            }
        }
        if(list1){
                t->next =list1;
                
        }
        if(list2){
               t->next =list2;
        }

        return ans.next;
    }
};