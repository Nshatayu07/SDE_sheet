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
            ListNode* p = head;
            ListNode* q = NULL;
            ListNode* r = NULL;

            while(p!=NULL){
                r=q;
                q=p;
                p=p->next;
                q->next = r;
            }

            return q;
        }

        ListNode* removeNthFromEnd(ListNode* head, int n) {
            ListNode* p = head;
            // ListNode* p = nhead;
            if(head==NULL) return head;
            int count=0;
            while(p!=NULL){
                count++;
                p=p->next;
            }
            if(count==1 and n==1) return NULL;
            if(count==n){
                head = head->next;
                return head;
            }
            p=head;
            int a = count-n;
            count=1;
            while(count!=a and p!=NULL){
                p=p->next;
                count++;
            }
            p->next = p->next->next;

            return head;
        }
    };