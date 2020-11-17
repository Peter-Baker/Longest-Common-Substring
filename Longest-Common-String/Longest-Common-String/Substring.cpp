#include "Substring.h"

Substring::Substring()
{
}

Substring::Substring(string, string)
{
}

void Substring::SetStringOne(string)
{
}


void Substring::SetStringTwo(string)
{
}


void Substring::MakeSubString(string, string)
{
}

void Substring::MakeSubString()
{
}

string Substring::GetStringOne()
{
	return s1;
}


string Substring::GetStringTwo()
{
	return s2;
}

int Substring::GetSubStringLength()
{
	return substring.size();
}
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
