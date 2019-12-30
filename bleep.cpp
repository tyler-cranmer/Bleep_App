// bleep.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Application intakes a string and replaces every time the word broccoli appears with ********. 
// Code Academy C++ reference project.

#include <iostream>
#include <string>
#include "functions.h"



int main() {

	std::string word = "broccoli";
	std::string text = "I sometimes eat broccoli. There are three interesting things about broccoli. Number One. Nobody knows how to spell it. Number Two. No matter how long you boil it, it's always cold by the time it reaches your plate. Number Three. It's green. #broccoli";

	bleep (word, text);

	for (int i = 0; i < text.length(); i++) {
		std::cout << text[i];
	}
	std::cout << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
