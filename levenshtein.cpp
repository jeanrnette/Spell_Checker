//Name:	Jeannette Ruiz
//SID:	900159074
//This project is my own work.

//Levenshtein and Minimum functions

#include "levenshtein.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>

//Minimum
int min(int a, int b, int c) {
	if (a <= b && a <= c) {
		return a;
	}
	else if (b <= a && b <= c) {
		return b;
	}
	else {
		return c;
	}
}

//Levenshtein
int levenshtein(const std::string& a, const std::string& b) {
	if (b.size() == 0) {
		return a.size();
	}
	else if (a.size() == 0) {
		return b.size();
	}
	else if (a[0] == b[0]) {
		return levenshtein(a.substr(1, a.size() - 1), b.substr(1, b.size() - 1));
	}
	else {
		std::string aPrime = a.substr(1, a.size() - 1);
		std::string bPrime = b.substr(1, b.size() - 1);
		return 1 + min(levenshtein(aPrime, b), levenshtein(a, bPrime), levenshtein(aPrime, bPrime));
	}
}