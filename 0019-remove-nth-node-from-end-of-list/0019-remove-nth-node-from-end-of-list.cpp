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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return NULL;
        
        ListNode* t=head;
        int count=0; //size of L.L
        while(t!=NULL){
            count++;
            t=t->next;
        }
        //if node to be deleted is head
        if(count==n){
            ListNode* temp = head;
            head=head->next;
            delete temp;
            return head;
        }
        
    
        //reach just before the target node
        ListNode* temp = head;
        for(int i=0;i<count-n-1;i++){
            temp=temp->next;
        }
        //delete target node
        ListNode* del = temp->next;
        temp->next=del->next;
        delete del;

        return head;
    }
};