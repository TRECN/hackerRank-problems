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
    void reorderList(ListNode* head) {
        ListNode* temp=head;
        vector<int>a;
        while(temp){
            a.push_back(temp->val);
            temp=temp->next;
        }
        int n=a.size()-1;
        int i=0;
        int j=n-i;
        vector<int>b;
        for(int k=0;k<n+1;k++){
            if(k%2==0){
                b.push_back(a[i]);
                i++;
            }
            else{
                b.push_back(a[j]);
                j=n-i;
            }
        }
        head=NULL;
        for(int j=0;j<a.size();j++){
            ListNode* x=new ListNode(a[j]);
            if(head==NULL){
                head=x;
                continue;
            }
           ListNode* temp1=head;
           while(temp1->next!=NULL){
               temp1=temp1->next;
           }
           temp1->next=x;
        }
    }
};