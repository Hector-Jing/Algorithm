#include<iostream>
#include<vector>

using namespace std;

class TreeNode{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right): val(x), left(left), right(right){}
};

// vector<int> preOrderTraversal(TreeNode* root){
    
// }

// void preOrder(TreeNode* node){


// }

int main(){
    vector<int> treeList;
    for(int i=0;i<6;i++){
        treeList.push_back(i);
    }
    return 0;
}
