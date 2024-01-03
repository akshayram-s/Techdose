class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>>pq;
        if(lists.size()==0) 
            return NULL;
        for(int i=0;i<lists.size();i++){
            ListNode* p=lists[i];
            while(p){
                pq.push(p->val);
                p=p->next;
            }
        }
        if(pq.size()==0) 
            return NULL;
        ListNode* head = new ListNode;
        head->val=pq.top();
        head->next=NULL;
        pq.pop();
        ListNode* p=head;
        while(!pq.empty()){
            ListNode* tmp=new ListNode;
            tmp->val=pq.top();
            pq.pop();
            tmp->next=NULL;
            p->next=tmp;
            p=p->next;
        }
        return head;
    }
};