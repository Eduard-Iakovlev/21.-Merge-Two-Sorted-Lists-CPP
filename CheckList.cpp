#include "CheckList.h"

bool CheckList::checkList(ListNode* result, ListNode* expected){
	if (result == nullptr && expected == nullptr) return true;
	ListNode* currentRes = result;
	ListNode* currentExp = expected;
	while (currentRes != nullptr && currentExp != nullptr) {
		if (currentRes->val != currentExp->val) {
			delete currentExp;
			delete currentRes;
			return false;
		}
		currentRes = currentRes->next;
		currentExp = currentExp->next;
	}
	if (currentExp != nullptr || currentRes != nullptr) {
		delete currentExp;
		delete currentRes;
		return false;
	}
	delete currentExp;
	delete currentRes;
	return true;
}
