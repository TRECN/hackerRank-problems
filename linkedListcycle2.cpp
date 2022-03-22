class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head) return NULL;
        
        ListNode *s=head,*f=head;
        
        do{
            s = s->next;
            if(!s) break;
            
            f= f->next;
            if(!f) break;
            f = f->next;
            if(!f) break;            
            
        }while(s!=f);
        if(!s or !f)
            return NULL;
        
        f = head;
        while(f !=s)
            f=f->next, s=s->next;
        return f;
    }
};