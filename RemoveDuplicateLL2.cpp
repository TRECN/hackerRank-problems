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
        ListNode* temp=new ListNode(INT_MIN);
        ListNode* result=temp;
        temp->next=a;
        while(a!=NULL && a->next!=NULL){
            if(a->next!=NULL&&a->val==a->next->val){
                int b=a->val;
                while(a&&a->val==b)
                    a=a->next;
            }
            else{
                temp->next=a;
                a=a->next;
                temp=temp->next;
            }
            
            
        }
        temp->next=a;
        return result->next;
    }
};