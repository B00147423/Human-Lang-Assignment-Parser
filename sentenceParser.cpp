#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
#include "SentenceParser.hpp"
#include "Tree.hpp"
using namespace std;

bool SentenceParse(const string& sentence, 
                   unordered_map<string, vector<vector<string>>>& rules, 
                   unordered_map<string, string>& lexicon,  
                   TreeNode*& parseTree) {
    vector<string> tokens = tokenize(sentence);
    int index = 0;

    cout << "Tokens: ";
    for (const auto& token : tokens) {
        cout << token << " ";
    }
    cout << endl;

    return matchRule(tokens, "Sentence", rules, lexicon, parseTree, index);
}
