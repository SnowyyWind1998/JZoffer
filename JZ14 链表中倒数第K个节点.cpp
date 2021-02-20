/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(!pListHead || k<= 0){return nullptr};
        ListNode* fast = pListHead;
        ListNode* slow = pListHead;
        unsigned int a = k;
        while(k--){
            if(fast){fast=fast->next;}
            else{return nullptr;}
        }
        while(fast){
            fast = fast->next;
            slow = slow->next;
        }
            return slow;
        }
    };
