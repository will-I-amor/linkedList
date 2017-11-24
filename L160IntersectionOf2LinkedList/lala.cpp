class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0;
        int lenB = 0;
        if(!headA||!headB){return NULL;}
        ListNode* lA = headA;//loop A
        ListNode* lB = headB;//loop B
        while(lA&&lA->next)
        {
            lenA+=1;
            lA = lA->next; 
        }
        while(lB&&lB->next)
        {
            lenB+=1;
            lB = lB->next;
        }
        if(lA!=lB){return NULL;}//they don't intersect
        int cha = (lenA>lenB)?(lenA-lenB):(lenB-lenA);
        if(lenA>lenB)
        {
            while (cha>0)//move long list's head to the 差值位置，使2者同一步伐
            {
                headA = headA->next;
                cha-=1;
            }
        }
        if(lenA<lenB)
        {
            while(cha>0)
            {
                headB = headB->next;
                cha-=1;
            }
        }
        while(headA)
        {
            if(headA==headB)
            {
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
    }
};
