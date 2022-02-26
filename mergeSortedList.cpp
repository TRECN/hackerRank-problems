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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>result;
        while(list1){
            result.push_back(list1->val);
            list1=list1->next;
        }
        while(list2){
            result.push_back(list2->val);
            list2=list2->next;
        }
        sort(result.begin(),result.end());
        ListNode* result1=NULL;
        ListNode* temp=result1;
        for(int i=0;i<result.size();i++){
            if(!result1){
                result1=new ListNode(result[i]);;
                temp=result1;
            }
            else{
                temp->next=new ListNode(result[i]);
                temp=temp->next;
            }
            
        }
        return result1;
        
    }
};