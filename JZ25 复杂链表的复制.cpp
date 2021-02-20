/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* head)
    {
        for(auto p = head; p;){
            auto newp = new RandomListNode(p->label);
            auto temp = p->next;
            p->next = newp;
            newp->next = temp;
            p = temp;
        }
        
        for(auto p = head;p;p=p->next->next){
            if(p->random){
                p->next->random = p->random->next;
            }
        }
        
        auto dummy = new RandomListNode(-1);
        
        auto cur = dummy;
        for(auto p = head; p;p=p->next){
            cur->next=p->next;
            cur = cur-> next;
            p->next = p->next->next;
        }
        
        
        return dummy->next;
    }
};