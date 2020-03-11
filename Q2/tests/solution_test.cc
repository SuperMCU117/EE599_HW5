#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FirstTest, Normalcase) {
  Solution solution;
  std::vector<int>result;
  std::vector<int>NonRec;
  Node* root = new Node(15);
  root->left = new Node(10);
  root->right = new Node(20);
  root->left->left = new Node(8);
  root->left->right = new Node(12);
  root->right->left = new Node(16);
  root->right->right = new Node(25);
  std::vector<int>expected1{8,10,12,15,16,20,25};
  std::vector<int>expected2{8,10,12,15,16,20,25};
  solution.RecursiveTraversal(root,result);
  solution.NonRecursiveTraversal(root,NonRec);
  EXPECT_EQ(expected1,result);
  EXPECT_EQ(expected2,NonRec);
}

TEST(SecondTest, Normalcase) {
  Solution solution;
  std::vector<int>result;
  std::vector<int>NonRec;
  Node* root = new Node(3);
  root->left = new Node(2);
  root->right = new Node(20);
  root->right->left = new Node(15);
  root->right->right = new Node(27);
  std::vector<int>expected1{2,3,15,20,27};
  std::vector<int>expected2{2,3,15,20,27};
  solution.RecursiveTraversal(root,result);
  solution.NonRecursiveTraversal(root,NonRec);
  EXPECT_EQ(expected1,result);
  EXPECT_EQ(expected2,NonRec);
}