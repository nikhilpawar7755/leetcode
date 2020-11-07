/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* prev = NULL;
    struct ListNode* current = head;
    struct ListNode* next;
    if (head == NULL) return head;
    while (current->next != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    if (current->next == NULL){
        current->next = prev;
        head = current;
    }
    return head;
}