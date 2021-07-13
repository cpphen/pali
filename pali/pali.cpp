// pali.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	bool isPalindrome(int x) {
		string originalNum = to_string(x);
		string strNum = originalNum;
		reverse(strNum.begin(), strNum.end());
		//need to return stoi to a variable otherwise comparing strNum will still be a string;

		return originalNum == strNum;
	}
};


int main()
{
	Solution s;
	bool flag = s.isPalindrome(121);
	cout << flag;
    return 0;
}

