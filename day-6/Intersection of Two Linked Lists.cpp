/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode* , bool> m;
        ListNode* p = headA;
        while(p!=NULL){
            m[p] = true;
            p=p->next;
        }
         
        ListNode* q = headB;
        while(q!=NULL){
            if(m[q]){
                return q;
            }
            m[q] = true;
            q=q->next;
        }

        return p;
    }
};