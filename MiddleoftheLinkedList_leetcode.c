/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* ptr = head;
    int listLen = 0;
    while(ptr != NULL){
        listLen++;
        ptr = ptr -> next;
    }
     
    if(listLen == 1){
        return head;
    }
    int mid = ceil(listLen / 2);
    
    // printf("%d", mid);
    ptr = head;
    int count = 1;
    while(count != mid){
        count++;
        ptr = ptr -> next;
    }
    head = ptr -> next;
    return head;
}
