#ifndef CODE_H
#define	CODE_H
#include<ctime>
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


#endif
