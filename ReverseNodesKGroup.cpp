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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        vector<int>a;
        while(temp){
            a.push_back(temp->val);
            temp=temp->next;
        }
        int n=a.size()-(a.size()%k);
        int i=0;
        int k1=i+k-1;
        
        while(k1<n){
            reverse(a.begin()+i,a.begin()+k1+1);
            i=k1+1;
            k1=i+k-1;
        }

        ListNode* result=NULL;
        for(int j=0;j<a.size();j++){
            ListNode* x=new ListNode(a[j]);
            if(result==NULL){
                result=x;
                continue;
            }
           ListNode* temp1=result;
           while(temp1->next!=NULL){
               temp1=temp1->next;
           }
           temp1->next=x;
        }
        return result;
    }
};