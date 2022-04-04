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
        ListNode *pt1=head,*pt2=head,*pos=NULL;
        while(--k)
            pt1=pt1->next;

        pos=pt1;
        pt1=pt1->next;
        while(pt1){
            pt1=pt1->next;
            pt2=pt2->next;
        }
        swap(pt2->val,pos->val);
        return head;
    }
};