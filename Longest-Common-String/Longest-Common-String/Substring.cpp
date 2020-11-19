#include "Substring.h"

Substring::Substring()
{
	s1 = "";
	s2 = "";
	substring = "";
}

Substring::Substring(string input1, string input2)
{
	s1 = input1;
	s2 = input2;
	substring = "";
}

/*This sets the first string value*/
void Substring::SetStringOne(string input)
{
	s1 = input;
}

/*This sets the second string value*/
void Substring::SetStringTwo(string input)
{
	s2 = input;
}

/*This takes 2 strings and finds the substring. Then sets that to the 'substring' variable.*/
void Substring::MakeSubString()
{

}

/*Returns string one*/
string Substring::GetStringOne()
{
	return s1;
}

/*Returns string two*/
string Substring::GetStringTwo()
{
	return s2;
}

/*Returns substring length*/
int Substring::GetSubStringLength()
{
	return substring.size();
}

/*Gets the substring value*/
string Substring::GetSubString()
{
	return substring;
}

void Substring::Reset()
{
	s1.clear();
	s2.clear();
	substring.clear();
}
