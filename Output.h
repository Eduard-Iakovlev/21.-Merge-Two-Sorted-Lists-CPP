#pragma once
#include<vector>
#include "ListNode.h"

using namespace std;

class Output{
public:
	Output() = default;
	~Output() = default;

	void setOutputData(int testNum, vector<int> listData1, vector<int> listData2, vector<int> listExpected);

	void printCheck(ListNode* result, ListNode* expected);
	void printSolution();
private:
	int _testNum;
	vector<int> _listData1, _listData2, _listExpected;

	void setTestNum(int testNum);
	void setListData1(vector<int> listData1);
	void setListData2(vector<int> listData2);
	void setListExpected(vector<int> listExpected);
	


	
};

