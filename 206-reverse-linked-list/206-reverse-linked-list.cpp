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
        stack<ListNode*> stk;
        ListNode* ptr=head;
        while(ptr){
            stk.push(ptr);
            ListNode* tmp=ptr;
            ptr=ptr->next;
            tmp->next=NULL;
        }
        ptr=NULL;
        ListNode* tmp=NULL;
        if(!stk.empty())
        {   ptr=stk.top();
         stk.pop();
            tmp=ptr;}
        while(!stk.empty())
            {
                ptr->next=stk.top();
                ptr=ptr->next;
                stk.pop();
            }
        
        return tmp;
    }
};