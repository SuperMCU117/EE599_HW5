#include "solution.h"
#include <iostream>
#include <string>
#include <vector>
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
    return level-1;
}




