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
// class Solution {
// public:

//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode* a=l1;
//         ListNode* b=NULL;
//         ListNode* c;
//         while(a!=NULL){
//             c=a->next;
//             a->next=b;
//             b=a;
//             a=c;
//         }
//         l1=b;
//         ListNode* a1=l2;
//         ListNode* b1=NULL;
//         ListNode* c1;
//         while(a1!=NULL){
//             c1=a1->next;
//             a1->next=b1;
//             b1=a1;
//             a1=c1;
//         }
//         l2=b1;
        
//         ListNode* temp1=l1;
//         ListNode* temp2=l2;
//         ListNode* result=NULL;
//         long long s1=0,s2=0,r=0;
//         if(!(temp1->val==0&&temp1->next==NULL&&temp2->val==0&&temp2->next==NULL)){
//         while(temp1!=NULL){
//             s1=s1*10+temp1->val;
//             temp1=temp1->next;
//         }
//         while(temp2!=NULL){
//             s2=s2*10+temp2->val;
//             temp2=temp2->next;
//         }
//         long long sum = s1+s2;
        
        
//         long long ar=sum;
//         while(ar>0){
//             r=ar%10;
//             ar=ar/10;
//             ListNode* n=new ListNode(r);
//             if(result==NULL){
//                 result=n;
//                 continue;
//             }
//             ListNode* temp=result;  
//             while(temp->next!=NULL){
//                 temp=temp->next;
//             }          
//             temp->next=n;

//         }
//         }
//         else{
//             ListNode* n=new ListNode(0);
//             result=n;
//         }
            
//         return result;
//     }
// };

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