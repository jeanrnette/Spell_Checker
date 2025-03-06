//Name:	Jeannette Ruiz
//SID:	900159074
//This project is my own work.

#include <iostream>
#include <vector>
#include <string>

#include "levenshtein.h"
#include "load_dictionary.h"
#include "spellcheck.h"

int main() {
	auto words = load_dictionary("5_letter_dictionary.txt");
	char response = 'y';

	do {
		std::cout << "Enter a word to check. ";
		std::string word;
		std::cin >> word;

		std::cout << "How many suggestions would you like? ";
		int n;
		std::cin >> n;

		std::cout << "Here are your spelling suggestions: ";
			auto correction = suggested_corrections(word, words, n);
		for (auto w : correction) { 
			std::cout << w << " ";
		}
	std::cout << "Try again? (y/n) ";
	std::cin >> response;
	} while (response == 'y' or response == 'Y');
}