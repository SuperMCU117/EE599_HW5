#include <iostream>
#include <string>
#include <vector>
#include "src/lib/solution.h"



int main()
{
    Solution solution;
    Node* root = nullptr;

    root = new Node(3);
    root->left = new Node(2);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(27);
    root->right->right->right = new Node(40);
    int level=0;
    level=solution.levelOrderTraversal(root);
    std::cout<<std::endl<<"Max Depth = "<<level<<std::endl;
   

    return 0;
}