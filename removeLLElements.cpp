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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp,*temp1;
        temp=head;
        while(temp!=NULL){
            if(head->val==val){
                head=head->next;
                temp=head;
                continue;
            }
            else if(temp->val!=val){
                temp1=temp;
                temp=temp->next;
                continue;
            }
            temp1->next=temp->next;
            temp=temp->next;
        }
        return head;
    }
};