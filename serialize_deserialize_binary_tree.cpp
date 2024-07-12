#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:

    string serialize(TreeNode* root) {
        if(root == NULL) return "";
        
        string s = "";
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();
            
            if(curr == NULL) s += "*,";
            else {
                s += to_string(curr->val) + ',';
            }
            
            if(curr) {
                q.push(curr->left);
                q.push(curr->right);
            }

        }

        return s;
    }

    TreeNode* deserialize(string data) {
        if(data.size() == 0) return NULL;
        
        stringstream s(data);
        string str;
        getline(s,str,',');
        
        queue<TreeNode*> q;
        TreeNode* root = new TreeNode(stoi(str));
        q.push(root);
        
        while(!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();
            
            getline(s,str,',');
            if(str == "*") {
                curr -> left = NULL;
            }
            else {
                TreeNode* leftNode = new TreeNode(stoi(str));
                curr->left = leftNode;
                q.push(leftNode);
            }
            
            getline(s,str,',');
            if(str == "*") {
                curr->right = NULL;
            }
            else {
                TreeNode* leftNode = new TreeNode(stoi(str));
                curr->right = leftNode;
                q.push(leftNode);
            }
        }
        return root;
    }
};

TreeNode* createNode(int val) {
    return new TreeNode(val);
}

void print(TreeNode* root) {
    if(root == NULL) {
        cout<<"null,";
        return;
    }

    cout<<root->val<<",";
    print(root->left);
    print(root->right);
}

int main() {
    TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->right->left = createNode(4);
    root->right->right = createNode(5);

    Solution solution;
    string data = solution.serialize(root);

    cout<<"serialized data: "<<data<<endl;

    TreeNode* droot = solution.deserialize(data);   

    cout<<"deserialized tree: "<<endl;
    print(droot);

    return 0;
}