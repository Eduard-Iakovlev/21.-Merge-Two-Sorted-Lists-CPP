#pragma once
#include <vector>

using namespace std;
struct ListNode {
	int val;
	ListNode* next;
	ListNode();
	ListNode(int x);
	ListNode(int x, ListNode* next);

	~ListNode() = default;

	void listInit(vector<int> listData);
	void printList();
	
};

