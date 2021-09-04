//Soln by Colton-Pekar
// detect if balanced parenthesis

#include<iostream>
#include<stack>
#include<vector>
#include<deque>
#include <string>
using namespace std;

bool CheckParenthesisBalance(string expression){
std::stack<int> S;
int i;
	for (i = 0; i < expression.size() - 1; i++) {
		cout << expression[i] << endl;
		if (expression[i] == ('(' || '{' || '[')) {
			S.push(expression[i]);
		}
		else if (expression[i] == (")" || "}" || "]")) {
			if (S.empty()) {
				return false;
			}
			else {
				S.pop();
			}
		}
	}
	cout << S.empty();
	return S.empty();
}

int main() {
	//initialize
	string str;
	bool isBalanced = false;

	cout << "Please input a combination of parenthesis";
	cin >> str;
	cout << "The string of parenthesis is: " << str << endl;

	//check if balanced
	isBalanced = CheckParenthesisBalance(str);
	cout << isBalanced;
	if (isBalanced == true) {
		cout << "the parenthesis is balanced" << endl;
	}
	else {
		cout << "the parenthesis is not balanced" << endl;
	}
	return 0;
}


