class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = NULL;
        ListNode* curr = head ;

        while ( curr != NULL) {
            ListNode* temp = curr -> next;
            curr -> next = pre;

            pre = curr;
            curr = temp;
        }
        return pre;
    }
};
      

        
