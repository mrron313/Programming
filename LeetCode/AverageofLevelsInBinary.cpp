#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include <algorithm>

using namespace std;

vector<vector<int> > ans;

typedef struct TreeNode{
	int val ;
	TreeNode *left;
	TreeNode *right;
};

TreeNode *create_node(int value){
	TreeNode *n = (TreeNode *)malloc(sizeof(TreeNode));
	n->val = value;
	n->left=NULL;
	n->right=NULL;
	return n;
}

TreeNode *left_assign(int value, TreeNode *n){
	TreeNode *n1 = (TreeNode *)malloc(sizeof(TreeNode));
	n1 = create_node(value);
	n->left=n1;
	return n1;
}

TreeNode *right_assign(int value, TreeNode *n){
	TreeNode *n1 = (TreeNode *)malloc(sizeof(TreeNode));
	n1 = create_node(value);
	n->right=n1;
	return n1;
}

void dfs(TreeNode *root, int height){
	if(root==NULL)
		return;
	while(ans.size()<=height)
		ans.push_back(vector<int>());
	ans[height].push_back(root->val);
	dfs(root->left,height+1);
	dfs(root->right,height+1);
}

vector<double> levelOrderBottom(TreeNode* root) {
   dfs(root,0);
   reverse(ans.begin(),ans.end());
   
   int row = ans.size();
   int col;
   double sum = 0.0;
   
   vector<double> res;
   
   for(int i=0;i<row;i++){
   		sum=0;
   		col = ans[i].size();
		for(int j=0;j<col;j++){
			sum+=ans[i][j];
		}
		res.push_back(sum/col);
   }
   
	reverse(res.begin(),res.end());

    return res;
}

int main(){
	
	TreeNode *n1, *n1_left, *n1_right ;
	TreeNode  *n1_right_l, *n1_right_r ;

	n1 = create_node(3);
	n1_left = left_assign(9,n1);
	n1_right = right_assign(20,n1);
	
	n1_right_l = left_assign(15,n1_right);
	n1_right_r = right_assign(7,n1_right);
	
	levelOrderBottom(n1);
}


