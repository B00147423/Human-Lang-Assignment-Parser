#ifndef SENTENCEPARSER_H
#define SENTENCEPARSER_H

#include <unordered_map> // Include this header for unordered_map
#include <vector>
#include <string>
#include "Tree.hpp" // Include TreeNode class definition

using namespace std;

// Function declarations
unordered_map<string, vector<vector<string>>> loadGrammarRules(const string& filePath);
vector<string> tokenize(const string& sentence);

bool SentenceParse(const std::string& sentence, 
                   unordered_map<string, vector<vector<string>>>& rules, 
                   unordered_map<string, string>& lexicon,  
                   TreeNode*& parseTree);
#endif // SENTENCEPARSER_H
