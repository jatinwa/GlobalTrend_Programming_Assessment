#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
private:
    int solve(TreeNode* root, int& maxSum) {
        if(root == NULL) return 0;

        int l = solve(root->left, maxSum);
        int r = solve(root->right, maxSum);
        
        maxSum = max({maxSum, l + r + root->val, root->val + l, root->val + r, root->val});

        return root->val + max({0, l, r});
    }

public:
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        solve(root, maxSum);
        return maxSum;
    }
};

TreeNode* createNode(int val) {
    return new TreeNode(val);
}

int main() {
    TreeNode* root = createNode(-10);
    root->left = createNode(9);
    root->right = createNode(20);
    root->right->left = createNode(15);
    root->right->right = createNode(7);

    Solution solution;
    int ans = solution.maxPathSum(root);

    cout<< ans << endl;

    return 0;
}