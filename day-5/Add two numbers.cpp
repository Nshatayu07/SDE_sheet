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


    ListNode* reverse(ListNode* head){
    if(head==NULL) return head;

        ListNode* p = head;
        ListNode* q = NULL;
        ListNode* r = NULL;

        while(p!=NULL){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }

        return q;

    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

         l1 = reverse(l1);
         l2 = reverse(l2);


        ListNode* ll = new ListNode(0);
        ListNode* p = ll;
        // ll = p 
        int carry = 0;
        while(l1!=NULL and l2!=NULL){
            int a = l1->val + l2->val + carry;
            carry = a/10;
            int b = a%10;
            ListNode* q = new ListNode(b);
            // l1->val = b;
            p->next = q;
            p=p->next;
            l1 = l1->next;
            l2= l2->next;
        }

        while(l1!=NULL){
            int a = l1->val + carry;
            carry = a/10;
            int b = a%10;
            ListNode* q = new ListNode(b);
            p->next = q;
            p=p->next;
            l1 = l1->next;
        }

        while(l2!=NULL){
            int a = l2->val + carry;
            carry = a/10;
            int b = a%10;
            ListNode* q = new ListNode(b);
            p->next = q;
            p=p->next;
            l2 = l2->next;
        }

        if(carry){
            ListNode* q = new ListNode(1);
            p->next = q;
            p=p->next;
        }
        
        return ll->next;
    }
};