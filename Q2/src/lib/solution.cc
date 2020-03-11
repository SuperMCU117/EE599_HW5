#include "solution.h"
#include <iostream>
#include <vector>
#include <stack>



bool Solution::printLevel(Node* root, int level)
{
    if (root == nullptr)
        return false;

    if (level == 1)
    {
        std::cout << root->key << " ";

        return true;
    }

    bool left = printLevel(root->left, level - 1);
    bool right = printLevel(root->right, level - 1);

    return left || right;
}



int Solution::levelOrderTraversal(Node* root)
{
    int level = 1;

    while (printLevel(root, level))
        level++;
    return level;
}



void Solution::RecursiveTraversal(Node* root,std::vector<int>&input){
    

    if(root==nullptr){
        return;
    }

    RecursiveTraversal(root->left,input);
    input.push_back(root->key);
    RecursiveTraversal(root->right,input);
    return;
}

void Solution::NonRecursiveTraversal(Node* root,std::vector<int>&input){
    std::stack<Node*>Track;
    Node* current = root;
    while (current != nullptr || Track.empty()== 0 ){
        while (current!= nullptr){
            Track.push(current);
            current = current->left;

        }
        current = Track.top();
        Track.pop();
        input.push_back(current->key);
        current = current -> right;
        
    }



}



