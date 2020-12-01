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
	int s1l = s1.length() + 1;
	int s2l = s2.length() + 1;

	int** T =  new int*[s1l];  //Pre-allocates memory for dyanmic array
	for (int i = 0; i < s1l; ++i)
	{
		T[i] = new int[s2l];
	}

	int subStringpositionx = 0;
	int subStringLength = 0;
	
	for (int i = 1; i <= s1.length(); i++) {    //locates substring
		for (int j = 1; j <= s2.length(); j++) {
			T[i][j] = 0;
			if (s1[i - 1] == s2[j - 1]) {
				T[i][j] = T[i - 1][j - 1] + 1;
				if (subStringLength < T[i][j]) {
					subStringLength = T[i][j];
					subStringpositionx = i;;
				}
			}
		}
	}
	for (int i = subStringpositionx - subStringLength; i < subStringpositionx; i++) {   //compiles substring
		substring += s1[i];
	}
	
	for(int i = 0; i < s1l; ++i) //Cleans up Pre-allocated memory
	{
		delete[] T[i];
	}
	delete[] T;
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
