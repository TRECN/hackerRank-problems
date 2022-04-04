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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *pt1=head,*pt2=head,*k=NULL;
        while(--k)
            pt1=pt1->next;

        k=pt1;
        pt1=pt1->next;
        while(pt1){
            pt1=pt1->next;
            pt2=pt2->next;
        }
        swap(ptr2->val,k->val);
        return head;

};