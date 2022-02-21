
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* a=head;
        while(a!=NULL && a->next!=NULL){
            if(a->val==a->next->val){
                a->next=a->next->next;
            }else{
                a=a->next;
            }
        }
        return head;
    }
};