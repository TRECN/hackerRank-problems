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
            if(a->val==a->next->val){
                int b=a->val;
                while(a->val==b)
                    a=a->next
            }
            else{
                temp->next=a;
                temp=temp->next
                a=a->next;
            }
        }
        return result->next;
    }
};