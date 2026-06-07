#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 * int val;
 * TreeNode *left;
 * TreeNode *right;
 * TreeNode() : val(0), left(nullptr), right(nullptr) {}
 * TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> node;
        unordered_set<int> children;

        for (const auto& desc : descriptions) {
            int parent = desc[0];
            int child = desc[1];
            bool isLeft = desc[2] == 1;
            if (node.find(parent) == node.end()) {
                node[parent] = new TreeNode(parent);
            }
            if (node.find(child) == node.end()) {
                node[child] = new TreeNode(child);
            }
            if (isLeft) {
                node[parent]->left = node[child];
            } else {
                node[parent]->right = node[child];
            }
            children.insert(child);
        }
        for (const auto& desc : descriptions) {
            int parentVal = desc[0];
            if (children.find(parentVal) == children.end()) {
                return node[parentVal];
            }
        }

        return nullptr; 
    }
};