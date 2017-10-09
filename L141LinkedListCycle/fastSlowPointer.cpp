//环的话，我们一般用快慢指针来解决
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *f = head;
        ListNode *s = head;
        while(f)
        {
            if(!f->next) return false;//如果快指针的next为空，就是没有环
            f = f->next->next;
            s = s->next;
            if(f==s) return true;//如果快慢指针想等，就是有环
        }
        return false;
    }
};
