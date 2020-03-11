
#include "src/lib/solution.h"
#include <iostream>
#include <vector>
#include <stack>


int main()
{
    Solution solution;
    Node* root = nullptr;

    root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);
    int level=0;
    //level=levelOrderTraversal(root);
    //std::cout<<std::endl<<level<<std::endl;
    std::vector<int>result;
    std::vector<int>NonRec;
    
    solution.RecursiveTraversal(root,result);
    for(int n: result){
        std::cout<<n<<"  ";
    }
    solution.NonRecursiveTraversal(root,NonRec);
    std::cout<<std::endl;
    for(int n: NonRec){
        std::cout<<n<<"  ";
    }

   

    return 0;
}