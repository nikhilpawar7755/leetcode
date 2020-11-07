/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// void insert(int addition){
//     struct ListNode *ele=(struct ListNode *)malloc(sizeof(struct ListNode)); 
//     ele->val = addition;
//       if (head == NULL){
//         head = ele;
//         head-> next = NULL;
//     }else {
//           if (tail == NULL){
//               head->next = ele;
//               tail = ele;
//               tail->next = NULL;
//           }else {
//               tail->next = ele;
//               tail = ele;
//               tail->next = NULL;
//           }            
//       }
//   }   


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int extra = 0;
    struct ListNode *head=NULL;
    struct ListNode *tail=NULL;
    while ((l1 != NULL) || (l2 != NULL)){
        int add =0;    
        if (l2 == NULL) add = l1->val + extra;
        if (l1 == NULL) add = l2->val +extra;
        if(l1 != NULL && l2 != NULL) add = l1->val + l2->val + extra;
            extra = 0;
            if (add >= 10){
                add = add % 10;
                extra = 1;
            }
        struct ListNode *ele=(struct ListNode *)malloc(sizeof(struct ListNode)); 
        ele->val = add;
        if (head == NULL){
            head = ele;
            tail = ele;
            head-> next = NULL;
        }else {
          if (tail == head){
              head->next = ele;
              tail = ele;
              tail->next = NULL;
          }else {
              tail->next = ele;
              tail = ele;
              tail->next = NULL;
          }            
      }
        if(l1 != NULL)l1 = l1->next;
        if(l2 != NULL)l2 = l2->next;
    }
    if (extra == 1){
         struct ListNode *ele=(struct ListNode *)malloc(sizeof(struct ListNode)); 
          ele->val = 1;
          tail->next = ele;
          tail = ele;
          tail->next = NULL;
    }
   return head;
}

 