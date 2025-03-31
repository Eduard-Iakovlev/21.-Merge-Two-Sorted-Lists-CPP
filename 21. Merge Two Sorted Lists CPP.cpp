#include <iostream>
#include <vector>
#include "Output.h"
#include "ListNode.h"

using namespace std;

int main(){
    setlocale(LC_ALL, "RUS");

	Output output;

    int testNum = 0;
    vector<int> listData1, listData2, listExpected;

    testNum++;
    listData1 = { 1, 2, 4 };
    listData2 = { 1, 3, 4 };
    listExpected = { 1, 1, 2, 3, 4, 4 };
	output.setOutputData(testNum, listData1, listData2, listExpected);
    output.printSolution();

    testNum++;
    listData1 = { };
    listData2 = { };
    listExpected = { };
	output.setOutputData(testNum, listData1, listData2, listExpected);
    output.printSolution();

    testNum++;
    listData1 = { };
    listData2 = { 0 };
    listExpected = { 0 };
	output.setOutputData(testNum, listData1, listData2, listExpected);
    output.printSolution();

}
