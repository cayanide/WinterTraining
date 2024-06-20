/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

         ListNode *dummy = new ListNode(0);
    ListNode *current = dummy;

    ListNode *p1 = list1;
    ListNode *p2 = list2;


    while (p1 != nullptr && p2 != nullptr) {
        if (p1->val <= p2->val) {
            current->next = p1;
            p1 = p1->next;
        } else {
            current->next = p2;
            p2 = p2->next;
        }
        current = current->next;
    }

    if (p1 != nullptr) {
        current->next = p1;
    }
    if (p2 != nullptr) {
        current->next = p2;
    }


    ListNode *mergedHead = dummy->next;
    delete dummy;
    return mergedHead;

    }
};
