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
        int n1=n-i;
        vector<int>b;
        for(int k=0;k<a.size();k++){
            if(k%2==0){
                b.push_back(a[i]);
                i++;
            }
            else{
                b.push_back(a[n1]);
                n1=n-i;
            }
        }
        head->val=b[0];
        head->next=NULL;
        for(int j=1;j<b.size();j++){
            ListNode* c=new ListNode(b[j]);
           ListNode* temp1=head;
           while(temp1->next!=NULL){
               temp1=temp1->next;
           }
           temp1->next=c;
        }
    }
};