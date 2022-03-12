
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