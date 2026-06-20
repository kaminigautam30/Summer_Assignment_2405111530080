class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        
        while( ptr2 && ptr2 -> next) {
            ptr1 = ptr1 -> next;
            ptr2 = ptr2 -> next -> next;
        }
        ListNode* pre = NULL;

        while (ptr1) {
            ListNode* temp = ptr1 -> next;

            ptr1 -> next = pre;
            pre = ptr1;
            ptr1 = temp;
        }
        while(pre) {
            if(head -> val != pre -> val)
               return false;
            head = head -> next;
            pre = pre -> next;
        }
        return true;
    }
};
