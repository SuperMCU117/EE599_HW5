#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
struct Node
{
    int key;
    Node *left, *right;

    Node(int key)
    {
        this->key = key;
        this->left = this->right = nullptr;
    }
};
class Solution {
public:
  bool printLevel(Node* root, int level);
  int levelOrderTraversal(Node* root);
  
};

#endif