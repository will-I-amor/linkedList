class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head){return NULL;}
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* meet = NULL;
        while(fast && fast->next)//这里要检查both fast和fast->next
        {
            fast = fast->next->next;
            slow = slow->next;
            if (fast==slow)//there's a loop
            {
                meet = slow;
                break;
            }
        }//上面那个while判断是否有loop，有则break
        if(!meet){return NULL;}//没有loop就return NULL
        fast = meet;
        slow = head;
        while(slow)
        {
            if(slow == fast)
            {
                return fast;
            }
            slow = slow->next;
            fast = fast->next;
        }
    }
};
