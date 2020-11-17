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
	string s1, s2, substring;
	void Reset();
};

