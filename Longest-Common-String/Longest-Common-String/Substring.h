/************************
Name: class Substring
Purpose: to take 2 strings and output a common substring
Notes: both input values are strings
*********************************/

#pragma once
#include <string>

using namespace std;
class Substring
{
public:
	Substring();
	Substring(string, string);
	~Substring()
	{

	}
	
	void SetStringOne(string);
	string GetStringOne();

	void SetStringTwo(string);
	string GetStringTwo();

	void MakeSubString(string,string);
	void MakeSubString();

	string GetSubString();
	int GetSubStringLength();

private:
	string s1; //this variable will hold the first string
	string s2; //this variable will hold the second string
	string substring; //this variable will hold the substring
	void Reset();
};

