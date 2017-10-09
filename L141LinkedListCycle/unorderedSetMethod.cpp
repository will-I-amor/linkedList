class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> visited;
        while (head)
        {
            if (visited.count(head)) return true;
            //如果head在visited里，即找到了head,那么就是有环
            visited.insert(head);
            head = head->next;
        }
        return false;
    }
};
