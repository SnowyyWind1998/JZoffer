/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> value;
        ListNode* p = head;
        while(p!=NULL){
            value.push_back(p->val);
            p = p->next;
        }
        reverse(value.begin(), value.end());
        return value;
    }
};