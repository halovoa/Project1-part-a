#include <cstdlib>
#include<iostream>
#include<vector>
#include "code.h"
#include<ctime>
#include<stdlib.h>
using namespace std;
int main()
{
	cout << "input code length " << endl;
	int n;
	cin >> n;
	cout << "input range of digits" << endl;
	int m;
	cin >> m;
	code newCode(n, m);
	vector<int> guessCode = newCode.RandInit(n, m);
	cout << "computer generated guesscode is " << endl;
	for (unsigned int i = 0; i < guessCode.size(); i++)
	{
		cout << guessCode.at(i) << " ";
	}
	cout << endl;
	int correct = newCode.checkCorrect();
	cout << "number of correct guesses are " << correct << endl;
	int wrong = newCode.checkIncorrect();
	cout << "number of right number in wrong places are " << wrong << endl;

}