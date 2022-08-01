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
    ListNode *detectCycle(ListNode *head) {
        map<ListNode *,int> m;
        ListNode * ptr=head;
        int i=1;
        while(ptr){
            if(!m[ptr]){
                m[ptr]=i;
                ptr=ptr->next;
                i++;
                
            }
            else{
                return ptr;
            }
        }
        return NULL;
        
    }
};