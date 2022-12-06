/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode* curr_node=head;
    struct ListNode* prev_node=head;
    struct ListNode* temp;

    while(curr_node!=NULL)
    {
        if(head->val == val)
        {
            head = head->next;
            curr_node = head;
            prev_node = head;
            continue;
        }
        if(curr_node->val == val)
        {
            prev_node->next = curr_node->next;
            curr_node = prev_node->next;  
            continue;
               
        }
        
        prev_node = curr_node;
        curr_node = curr_node->next;
    }

    return head;

}
