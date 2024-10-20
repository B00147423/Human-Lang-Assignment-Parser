
#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
#include "SentenceParser.hpp"

bool matchRule(const vector<string>& tokens, 
               const string& rule, 
               unordered_map<string, vector<vector<string>>>& rules,
               unordered_map<string, string>& lexicon,
               TreeNode*& parseTree, 
               int& index) {
    
    return false;
}
