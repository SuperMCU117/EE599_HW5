#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Test1, case1) {
  Solution solution;
  Node* root = new Node(3);
  root->left = new Node(2);
  root->right = new Node(20);
  root->right->left = new Node(15);
  root->right->right = new Node(27);
  root->right->right->right = new Node(40);
  EXPECT_EQ(4, solution.levelOrderTraversal(root));
}

TEST(Test2, case2) {
  Solution solution;
  Node* root = new Node(5);
  root->left = new Node(3);
  root->right = new Node(8);
  root->left->left =new Node(2);
  root->left ->right=new Node(4);
  root->right->left = new Node(15);
  root->right->right = new Node(27);
  EXPECT_EQ(3, solution.levelOrderTraversal(root));
}