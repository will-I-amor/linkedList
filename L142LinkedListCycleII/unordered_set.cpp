class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*>dict;
        while(head)
        {
            if(dict.count(head)){return head;}
            dict.insert(head);
            head = head->next;
        }
        return NULL;
    }
};
