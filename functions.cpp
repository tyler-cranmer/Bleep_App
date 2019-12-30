#include <string>
#include "functions.h"

void new_word(std::string word, std::string &text, int i) {

	for (int k = 0; k < word.length(); ++k) {
		text[i + k] = '*';
	}
}

void bleep(std::string word, std::string &text) {

	for (int i = 0; i < text.length(); ++i) {
		 
		int match = 0;
		
		for (int j = 0; j < word.length(); ++j) {

			if (text[i + j] == word[j]) {

				++match;
			}
		}

		if (match == word.length()) {
			
			new_word(word, text, i);
		}
	}
}