/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode* prev = NULL;
    struct ListNode* list = NULL;
    list = head;
    while(list != NULL){
          if (prev != NULL){
                while (list->val == prev->val ){
                    if (list->next == NULL){ 
                        prev->next = list->next;  
                        break;
                    }
                    prev->next = list->next;
                    list = list->next;
                }
          }
         prev = list;
         list = list->next;
    }
    return head;
}