#include <iostream>
#include <fstream>
#include <unordered_map>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<string> splitString(const string& str){
    vector<string> tokens;
    string tokenChar;
    
    for (char c : str){
        if (c == ' ') {  // Split when a space is encountered
            if (!tokenChar.empty()) {
                tokens.push_back(tokenChar);  // Add the token to the vector
                tokenChar.clear();  // Reset token
            }
        }else{
            tokenChar+= c;
        }
    }

    if(!tokenChar.empty()){
        tokens.push_back(tokenChar);
    }
    return tokens;
};

unordered_map<string, vector<vector<string>>> loadRules(const string& filePath) {
    unordered_map<string, vector<vector<string>>> rules;
    ifstream file(filePath);
    string line;

    while (getline(file, line)) {
        size_t pos = line.find("->");
       //if it doesnt contain the string in pos
        if (pos != -1){
            string leftHand = line.substr(0, pos);
            string rightHand = line.substr(pos + 3); // skipping spaces which is 1 left 1 right and middle is -> right that's why +3
            vector<string> productions;
            vector<string>productions = splitString(rightHand);
            rules[leftHand].push_back(productions);
        }
    }
    return rules;
}
