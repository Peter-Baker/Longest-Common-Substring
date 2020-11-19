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

/* Sets the first string with a string param */
void Substring::SetStringOne(string)
{
}

/* Sets the second string with a string param */
void Substring::SetStringTwo(string)
{
}


void Substring::MakeSubString(string, string)
{
}

/* Creates substring based on 2 previously assigned values */
void Substring::MakeSubString()
{
}

/* Returns string one */
string Substring::GetStringOne()
{
	return s1;
}

/* Returns string two */
string Substring::GetStringTwo()
{
	return s2;
}

/* Returns substring's length */
int Substring::GetSubStringLength()
{
	return substring.size();
}

/* Returns substring */
string Substring::GetSubString()
{
	return substring;
}

/* Resets string1, string2, and substring */
void Substring::Reset()
{
	s1.clear();
	s2.clear();
	substring.clear();
}
