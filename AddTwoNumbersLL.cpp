
class Solution {
public:

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a=l1;
        ListNode* b=l2;
        ListNode* result=NULL;
        ListNode* temp=result;
        int carry=0;
        while(a!=NULL||b!=NULL){
            int sum=0;
            if(a!=NULL)
                sum+=a->val;
            if(b!=NULL)
                sum+=b->val;

            sum+=carry;
            if(sum>=10){
                sum=sum%10;
                carry=1;
            }
            else
                carry=0;

            if(!result){
                result= new ListNode(sum);
                temp=result;
            }
            else{
                temp->next=new ListNode(sum);
                temp=temp->next;
            }
            if(a)
                a=a->next;
            if(b)
                b=b->next;

        }
        if(carry)
            temp->next=new ListNode(carry);
        
        return result;

    }
};