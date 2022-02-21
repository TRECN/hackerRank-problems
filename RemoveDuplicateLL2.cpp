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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* a=head;
        ListNode* temp=new ListNode(0,a);
        ListNode* pre=temp;
        while(a!=NULL){
            if(a->val==a->next->val &&a->next){
                while(a->val==a->next&&a->next)
                    a=a->next;
            }
            else{
                pre=pre->next;
            }
            
            a=a->next;
        }
        return temp->next;
    }
};