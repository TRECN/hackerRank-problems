
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* a=head;
        ListNode* b=NULL;
        ListNode* c;
        while(a){
            c=a->next;
            a->next=b;
            b=a;
            a=c;
        }
        head=b;
        return head;
    }
    
};