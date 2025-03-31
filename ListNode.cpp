#include "ListNode.h"
#include <iostream>

using namespace std;

ListNode::ListNode() : val(0), next(nullptr) {}

ListNode::ListNode(int x) : val(x), next(nullptr) {}

ListNode::ListNode(int x, ListNode* next) : val(x), next(next) {}

void ListNode::listInit(vector<int> listData){
	if (listData.empty()) {
		return;
	}
	this->val = listData[0];
	ListNode* current = this;
	for (size_t i = 1; i < listData.size(); ++i) {
		current->next = new ListNode(listData[i]);
		current = current->next;
	}	
}

void ListNode::printList() {
	if (this == nullptr) {
		cout << "NULL";
		return;
	}
	ListNode* current = this;
	while (current != nullptr) {
		cout << current->val;
		if (current->next != nullptr) {
			cout << "->";
		}
		current = current->next;
	}
}

