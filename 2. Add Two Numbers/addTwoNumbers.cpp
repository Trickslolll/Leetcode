/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = new ListNode;
        ListNode *a = ans;

        ListNode *t1 = l1;
        ListNode *t2 = l2;
        bool isEnd_01 = false;
        bool isEnd_02 = false;
        int aboveTen = 0;
        while(true)
        {
            int t = 0;
            if(isEnd_01 == false)
            {
                t += t1->val;
            }
            if(isEnd_02 == false)
            {
                t += t2->val;
            }
            t += aboveTen;
            aboveTen = t/10;
            a->val = t % 10;

            if(t1->next == nullptr)
            {
                isEnd_01 = true;
            }
            else
            {
                t1 = t1->next;
            }

            if(t2->next == nullptr)
            {
                isEnd_02 = true;
            }
            else
            {
                t2 = t2->next;
            }

            if(isEnd_01 == true && isEnd_02 == true)
            {
                if(aboveTen == 1)
                {
                    a->next = new ListNode;
                    a = a->next;
                    a->val = 1;
                }
                return ans;
            }

            a->next = new ListNode;
            a = a->next;
        }
    }
};
