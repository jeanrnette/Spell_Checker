//Name:	Jeannette Ruiz
//SID:	900159074
//This project is my own work.

//Suggested Corrections

#include "spellcheck.h"
#include "levenshtein.h"
#include <iostream>
#include <algorithm> // for sorting
#include <utility> // for std::pair
#include <string>
#include <vector>
#include <map>

std::vector<std::string> suggested_corrections(const std::string& word, const std::vector<std::string>& dictionary, int n = 3) {
	
	std::vector<std::pair<int, std::string>> suggestions; //to store the <lev distance, dictionary word>
    
    //Get lev distance and store then in pairs with their word
    for (int i = 0; i < dictionary.size(); ++i) {
        std::string dictionary_words = dictionary[i]; //Get each word from the dictionary
        int lev_distance = levenshtein(word, dictionary_words); //get the lev distance of the word and the dictionary word
        suggestions.push_back({lev_distance, dictionary_words}); //send to the back the words it already checked as pairs
    }

    //Sort the suggestions based on least to greatest lev distance
    std::sort(suggestions.begin(), suggestions.end());

    //Get the number of suggestions the user wants
    std::vector<std::string> top_n_suggestions;
    for (int i = 0; i < n; ++i) {
        top_n_suggestions.push_back(suggestions[i].second); //.second because its the word not the lev number
    }
    
    return top_n_suggestions;
}