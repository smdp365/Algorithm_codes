/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* ptr = head;
    int listLen = 0;
    while(ptr != NULL){
        listLen++;
        ptr = ptr->next;
    }
    // printf("%d,", listLen);

    int count = 1;
    ptr = NULL;
    // struct ListNode* ptrNxt = head;
    while(count < (listLen - n + 1) ){
        if(ptr == NULL) ptr = head;
        else ptr = ptr->next;
        
        count++;
    }
    if (ptr == NULL) {
        head = head->next;
        return head;
    }
    else {
        ptr->next = ptr->next->next;
        return head;
    }

    return head;
    
}
