/* #include<ctime>
#include<cstdlib>
#include<vector>
#include<iostream>
#include<stdlib.h>

using namespace std;
class code {
public:
	code(int n, int m);// constructor for code with length n range of m
	vector <int> RandInit(int n, int m); //initiate random code
	int checkCorrect(); //function that checkcorrect
	int checkIncorrect(); //function that checkincorrect
private:
	vector <int> newCode; //it stores users input of new code
	vector <int> guessCode;
};

code::code(int n, int m)
{
	int tem; //temporate code for store input
	for (int i = 0; i < n; i++) // a for loop stores users input code
	{
		cout << "please input number " << i + 1 << " integer";
		cin >> tem;
		newCode.push_back(tem);
	}
}
vector <int> code::RandInit(int n, int m)
{
	int remain;
	//srand(time(0));//initialize time for rand()
	for (int i = 0; i < n; i++) // a for loop ceates random code
	{
		remain = rand() % m;
		guessCode.push_back(remain);
	}
	return guessCode;
}
int code::checkCorrect()
{
	int counter = 0;
	for (unsigned int i = 0; i < guessCode.size(); i++)
	{
		if (guessCode[i] == newCode[i])
		{counter++; }
	}
	return counter;
}
int code::checkIncorrect()
{
	int incorrect = 0;
	vector<int> rep = newCode;
	for(unsigned int i=0;i<rep.size();i++)
	{
		if (guessCode[i] == rep[i])
		{
			guessCode[i] = -1;
			rep[i] = -5;
		}
	}
	for (unsigned int i = 0; i < rep.size(); i++)
	{
		for (unsigned int j = 0; j < rep.size(); j++)
		{
			if (guessCode[i] == rep[j])
			{
				incorrect++;
				guessCode[i] = -1;
				rep[j] = -5;
			}
		}
	}
	return incorrect;
}

int main()
{
	cout << "input code length "<<endl;
	int n;
	cin >> n;
	cout << "input range of digits"<<endl;
	int m;
	cin >> m;
	code newCode(n,m);
	vector<int> guessCode = newCode.RandInit(n,m);
	cout << "computer generated guesscode is " << endl;
	for (unsigned int i = 0; i < guessCode.size(); i++)
	{
		cout << guessCode.at(i)<<" ";
	}
	cout << endl;
	int correct = newCode.checkCorrect();
	cout << "number of correct guesses are " << correct << endl;
	int wrong = newCode.checkIncorrect();
	cout << "number of right number in wrong places are " << wrong << endl;


}
*/

#include<ctime>
#include<cstdlib>
#include<vector>
#include<iostream>
#include<stdlib.h>
#include "code.h"
using namespace std;

code::code(int n, int m)
{
	int tem; //temporate code for store input
	for (int i = 0; i < n; i++) // a for loop stores users input code
	{
		cout << "please input number " << i + 1 << " integer";
		cin >> tem;
		newCode.push_back(tem);
	}
}
std::vector <int> code::RandInit(int n, int m)
{
	int remain;
	//srand(time(0));//initialize time for rand()
	for (int i = 0; i < n; i++) // a for loop ceates random code
	{
		remain = rand() % m;
		guessCode.push_back(remain);
	}
	return guessCode;
}
int code::checkCorrect()
{
	int counter = 0;
	for (unsigned int i = 0; i < guessCode.size(); i++)
	{
		if (guessCode[i] == newCode[i])
		{
			counter++;
		}
	}
	return counter;
}
int code::checkIncorrect()
{
	int incorrect = 0;
	std::vector<int> rep = newCode;
	for (unsigned int i = 0; i < rep.size(); i++)
	{
		if (guessCode[i] == rep[i])
		{
			guessCode[i] = -1;
			rep[i] = -5;
		}
	}
	for (unsigned int i = 0; i < rep.size(); i++)
	{
		for (unsigned int j = 0; j < rep.size(); j++)
		{
			if (guessCode[i] == rep[j])
			{
				incorrect++;
				guessCode[i] = -1;
				rep[j] = -5;
			}
		}
	}
	return incorrect;
}

