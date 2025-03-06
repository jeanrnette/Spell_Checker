#pragma once

#include<string>
#include <vector>

#include <algorithm> // for sorting
#include <utility> // for std::pair
#include <map>

std::vector<std::string> suggested_corrections(const std::string& word, const std::vector<std::string>& dictionary, int n);