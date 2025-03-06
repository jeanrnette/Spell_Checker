//Load words from a dictionary file

#include "load_dictionary.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> load_dictionary(const std::string& dictionary) {
    std::ifstream infile(dictionary);
    if (!infile.is_open()) {
        std::cerr << "Cannot open file " << dictionary << ".\n";
        throw std::runtime_error("Failed to open file");
    }

    std::string word;
    std::vector<std::string> word_list;
    while (infile >> word) {
        word_list.push_back(word);
    }

    return word_list;
}