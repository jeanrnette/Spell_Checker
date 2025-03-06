# Spell Checker
Simple command-line spell checker that suggests corrections for misspelled words using the **Levenshtein distance** algorithm.

## How It Works
- Loads a dictionary of **5-letter words** from a text file.
- Reads input from user.
- Asks user how many word suggestions (n) they would like.
- Compares each word to the dictionary using **Levenshtein distance** to find the closest match.
- Suggests the n closest matches

## What I Learned
- File input and output in C++
- Implementing **Levenshtein distance** for string comparison
- Basic algorithms and data structures
- How to organize small projects into multiple files
- Sorting and selecting the **top N closest matches**
