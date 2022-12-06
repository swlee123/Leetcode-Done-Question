/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    
    struct ListNode* curr = head->next;
    struct ListNode* prev = head;
    prev->next = NULL;
    struct ListNode* next = curr->next;
    struct ListNode* temp = NULL;
    if(next ==NULL)
    {
        curr->next = prev;
        return curr;
    }
    while(next != NULL)
    {
        curr -> next = prev;
        temp = next->next;
        next->next = curr;
        prev = curr;
        curr = next;
        next = temp;
    }

    return curr;



}
