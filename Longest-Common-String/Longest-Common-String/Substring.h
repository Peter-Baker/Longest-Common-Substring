/************************
Program: Substring.h
Purpose: Takes 2 strings and outputs common substring
Notes: Takes 2 strings as input, outputs a string
*********************************/

#pragma once
#include <iostream>
#include <string>
#include <vector>

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

	void MakeSubString();

	string GetSubString();
	int GetSubStringLength();

private:
	string s1; //this variable is for the first string
	string s2; //this variable is for the second string
	string substring; //this variable is for the substring
	void Reset();
};

