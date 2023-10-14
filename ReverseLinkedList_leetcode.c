/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* ptr = head;
    
    int listLen = 0;
    while(ptr != NULL){
        listLen++;
        ptr = ptr->next;
    }

    // printf("%d", listLen);

    if(listLen == 0 || listLen == 1){
        return head;
    }

    struct ListNode* pre = NULL;
    struct ListNode* curr = head;
    struct ListNode* nxt = NULL;

    while (curr != NULL) {
            nxt = curr->next;
            curr->next = pre;
            pre = curr;
            curr = nxt;
        }
        head = pre;

    
    return head;
}
