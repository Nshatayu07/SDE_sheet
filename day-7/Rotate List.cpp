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
    ListNode* rotateRight(ListNode* head, int k) {

        int count=0;
        ListNode* p = head;
        ListNode* last = head;
        while(p!=NULL){
            count++;
            p=p->next;
        }
        p=head;

        if(head==NULL ||(k==0 || k%count==0)) return head;
        if(count==1) return head;

        int a = count - (k%count);
        a--;
        while(a--){
            p=p->next;
        }
        ListNode* q = p->next;
        p->next=NULL;
        head = q;
        while(q->next!=NULL){
            q=q->next;
        }
        q->next = last;

        return head;

    }
};