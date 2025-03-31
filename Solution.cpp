#include "Solution.h"

ListNode* Solution::mergeTwoLists(ListNode* list1, ListNode* list2){
    ListNode* mergeList = new ListNode();
    if (!list1 && !list2) return nullptr;
    if (!list1) return list2;
    if (!list2) return list1;

    if (list2 == NULL || (list1 != NULL && list1->val <= list2->val)) {
        mergeList = list1;
        list1 = list1->next;
    }
    else {
        mergeList = list2;
        list2 = list2->next;
    }
    ListNode* curr = mergeList;

    while (list1 || list2) {
        if (list2 == NULL || (list1 != NULL && list1->val <= list2->val)) {
            curr->next = list1;
            list1 = list1->next;
            curr = curr->next;
        }
        else {
            curr->next = list2;
            list2 = list2->next;
            curr = curr->next;
        }
    }


    return mergeList;
}
