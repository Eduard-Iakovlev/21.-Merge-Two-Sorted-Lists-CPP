#include "Output.h"
#include "CheckList.h"
#include "Solution.h"
#include <iostream>



void Output::setOutputData(int testNum, vector<int> listData1, vector<int> listData2, vector<int> listExpected){
	setTestNum(testNum);
	setListData1(listData1);
	setListData2(listData2);
	setListExpected(listExpected);
}

void Output::printCheck(ListNode* result, ListNode* expected){
	CheckList checkList;
	(checkList.checkList(result, expected)) ? cout << " Тест пройден!" << endl : 
												cout << " Тест провален!" << endl;
}

void Output::printSolution(){
	Solution solution;

	ListNode* list1 = new ListNode();
	ListNode* list2 = new ListNode();
	ListNode* expected = new ListNode();
	ListNode* result = new ListNode();

	cout << "============ Тест №" << _testNum << " ============" << endl;
	cout << "Входные данные: " << endl;
	cout << "list1: ";
	if (_listData1.empty()) list1 = nullptr;
	else list1->listInit(_listData1);
	list1->printList();
	cout << endl;
	cout << "list2: ";
	if (_listData2.empty()) list2 = nullptr;
	else list2->listInit(_listData2);
	list2->printList();
	cout << endl;
	cout << "Ожидаемый результат: ";
	if (_listExpected.empty()) expected = nullptr;
	else expected->listInit(_listExpected);
	expected->printList();
	cout << endl;
	cout << "Полученный результат: ";
	result = solution.mergeTwoLists(list1, list2);
	result->printList();
	cout << endl;
	cout << "============ Проверка ============" << endl;
	printCheck(result, expected);
	cout << "=================================\n" << endl;


}

void Output::setTestNum(int testNum){
	_testNum = testNum;
}

void Output::setListData1(vector<int> listData1){
	_listData1 = listData1;
}

void Output::setListData2(vector<int> listData2){
	_listData2 = listData2;
}

void Output::setListExpected(vector<int> listExpected){
	_listExpected = listExpected;
}


