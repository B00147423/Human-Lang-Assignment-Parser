#ifndef TREE_H // Include guard
#define TREE_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;
class TreeNode {
    public:
        std::string value;  // Grammatical category (e.g., NP, V, etc.)
        std::string name;   // Actual word (e.g., 'the', 'dog', 'likes')
        std::vector<TreeNode*> children;  // Children of this node

        TreeNode(const string& val, const string& nm){
                value = val;
                name = nm;
        }
        
        ~TreeNode(){
            for(auto child:children){
                delete child;
            }
        }

    void addChild(TreeNode* child){
        children.push_back(child);
    }

};

#endif // TREE_H