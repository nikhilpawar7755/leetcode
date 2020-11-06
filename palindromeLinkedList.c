/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


bool isPalindrome(struct ListNode* head){
    struct ListNode* list = head;
    int len =0;
    if (head == NULL) return true;
    while (list != NULL) {
        len++;
        list = list->next;
    }
    int array[len];
    list =head;
    int i = 0;
    while (list != NULL){
        array[i] = list->val;
        list = list->next;
        i++;
    }
    len = len - 1;
    for (i = 0; i <= len ; i++){
        if (array[i] != array[len]){
            return false;
        }
        len--;
    }
    return true;
}