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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p = list1;
        ListNode* q = list2;

        ListNode* head = new ListNode(0);
        ListNode* n = head;

        while(p!=NULL and q!=NULL){
            if(p->val>=q->val){
                ListNode* a = new ListNode(q->val);
                n->next = a;
                n=n->next;
                q=q->next;
            }else{
                ListNode* a = new ListNode(p->val);
                n->next = a;  
                                n=n->next;

                p=p->next;
            }
        }

        while(p!=NULL){
            ListNode* a = new ListNode(p->val);
            n->next = a;  
                            n=n->next;

            p=p->next;
        }

        while(q!=NULL){
            ListNode* a = new ListNode(q->val);
            n->next = a;  
                            n=n->next;

            q=q->next;
        }

        n = head;
        return n->next;
        
    }
};

