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

vector<string> tokenize(const string& sentence) {
    vector<string> tokens;
    string token;

    for(char c : sentence){
        if(isspace(c)){
            if(!token.empty()){
                tokens.push_back(token);
                token.clear();
            }
        }else{
            token+= c;
        }
    }
    if(!token.empty()) {tokens.push_back(token);} 
    return tokens;
}