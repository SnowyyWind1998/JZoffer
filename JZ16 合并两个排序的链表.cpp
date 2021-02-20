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
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        ListNode* compareOne = pHead1;
        ListNode* compareTwo = pHead2;
        ListNode* ans; 
        ListNode* start;
        ans = new ListNode(0);
        start = ans;
        
        while(compareOne != NULL && compareTwo != NULL){
            if(compareOne->val <= compareTwo->val){
                ans->next=compareOne;
                compareOne=compareOne->next;
            }else{
                ans->next=compareTwo;
                compareTwo=compareTwo->next;
            }
            ans=ans->next;
        }
        if(compareOne == NULL){
            ans->next = compareTwo;
        }else{
            ans->next = compareOne;
        }
        return start->next;
    }
};