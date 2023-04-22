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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || !head->next || left>=right)
            return head;
        
        ListNode * returnNode = head;
        ListNode* prevOne = head;
        ListNode* end = head;

        for(int i=0;i<left - 2;i++){
            prevOne = prevOne->next;
        }
        ListNode* begin = prevOne->next; 
        if(left ==1){
            prevOne = nullptr;
            begin = head;
        }
        for(int i =0;i<right - 1;i++){
            end = end->next;
        }
        ListNode* lastOne = end->next;

        ListNode* prev = nullptr;
        ListNode* cur = begin;
        while(cur!=lastOne){
            ListNode* dum = cur->next;
            cur->next = prev;
            prev = cur;
            cur = dum;
        }
        begin->next = lastOne;
        if(left == 1)
            return prev;
        prevOne->next = prev;

       
        return returnNode;
    }
};