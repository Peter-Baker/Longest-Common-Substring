/************************
Program: main.cpp
Purpose: Given two strings 'X' and 'Y', find the length of the longest common substring.
Author:  Peter Baker, Jacob Burton, and Kaven Arango
Date:    Nov 19, 2020
*********************************/
#include <iostream>
#include <string>
#include "Substring.h"


using namespace std;


int main()
{
	string stringOne; //used for user input of string one
	string stringTwo; //used for user input of string two

	bool continueLoop = true; //used to continue running the program

	cout << "Welcome to the Longest Common String Program. \n";
	cout << "This program will take in 2 strings and output the common substring.\n";
	cout << "Created by: Peter Baker, Jacob Burton, and Kaven Arango.\n" << endl;

	do
	{
		
		bool keepGoing = false; //Used for doWhile loops for verification

		do {
			keepGoing = false;
			cout << "Please enter the first string: ";
			getline(cin, stringOne);
			cout << endl;

			if (stringOne.length() == 0)
			{
				cout << "\nThe string cannot be blank. Please try again." << endl;
				keepGoing = true;
			}
		} while (keepGoing);

		do {
			keepGoing = false;
			cout << "Please enter your second string: ";
			getline(cin, stringTwo);
			cout << endl;

			if (stringTwo.length() == 0)
			{
				cout << "\nThe string cannot be blank. Please try again." << endl;
				keepGoing = true;
			}
		} while (keepGoing);

		Substring* substring = new Substring(stringOne, stringTwo); //Creating substring object with 2 strings as parameters
	
		substring->MakeSubString(); //Making substring

		int subStringLength = substring->GetSubStringLength(); //Getting substringlength

		cout << "The length of the Longest-Common-Substring is: " << subStringLength << endl;

		if (subStringLength == 0)
		{
			cout << "The strings have nothing in common." << endl;
		}
		else
		{
			cout << "The Longest-Common-Substring value is: " << substring->GetSubString() << endl;
		}

		bool repeatLoop = true;
		
		do {
			string yesNo = "";
			cout << "Do you want to do it again? 1 for Yes, 0 for No" << endl;
			getline(cin, yesNo);
			if (yesNo == "1")
			{
				repeatLoop = false;
			}
				
				

			if (yesNo == "0")
			{
				continueLoop = false;
				repeatLoop = false;
			}
		} while (repeatLoop);
		delete substring;
	} while (continueLoop);

	return 0;
}