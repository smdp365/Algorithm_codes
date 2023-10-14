/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {boolean}
 */
var hasCycle = function(head) {
    let curr = head, rev = head;

    while(curr && curr.next){
        curr = curr.next.next;
        rev = rev.next;
        if(curr === rev)
            return true;
    }
    return false;

};


//---------------------------------------------------------------------------

/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {boolean}
 */
// var hasCycle = function(head) {
//     let curr = head, rev = head;

//     while(curr && curr.next){
//         curr = curr.next.next;
//         rev = rev.next;
//         if(curr === rev)
//             return true;
//     }
//     return false;

// };
