class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyRoot = new ListNode(0);
        ListNode* res = dummyRoot;
        int sum = 0, add=0;
        
        while (l1!=NULL | l2!=NULL) 
        {
            if (l1 == NULL)
            {
                sum = (l2->val+add)%10;
                add = (l2->val + add)/10;
                
            }
            else if (l2 == NULL)
            {
                sum = (l1->val+add)%10;
                add = (l1->val + add)/10;
            }
            else
            {
                sum = (l1->val + l2->val + add)%10;
                add = (l1->val + l2->val + add)/10;
            }
                
            res->next = new ListNode(sum);
            res = res->next;

            if(l1 != NULL) l1 = l1->next;
            if(l2 != NULL) l2 = l2->next;
        }

        if(add!=0)
        {
            res->next = new ListNode(add);
            res = res->next;
        }
        
        res = dummyRoot->next;
        delete dummyRoot;
		
        return res;
    }
};