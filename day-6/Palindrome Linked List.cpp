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

    ListNode* findMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL and fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }


    ListNode* reverse(ListNode* head){
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

    bool isPalindrome(ListNode* head) {
        ListNode* p = head;
        ListNode* mid = findMid(p);
        ListNode* s = reverse(mid);

        while(s!=NULL){
            if(p->val!=s->val){
                return false;
            }
            p=p->next;
            s=s->next;
        }
        return true;
    }
};