#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include <algorithm>

using namespace std;

bool res=true;

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

void dfs(TreeNode *p, TreeNode *q, int height){

	if( (p==NULL && q!=NULL) || (p==NULL && q==NULL) || (p!=NULL && q==NULL) ){
		
		if((p==NULL && q==NULL) && res!=false) res=true; else res=false;
		return;
	}
	if(p->val!=q->val){
		res=false;
		return;
	}		
	
	//if(p->right!=NULL)
	dfs(p->left,q->left,height+1);
	dfs(p->right,q->right,height+1);
}

bool levelOrderBottom(TreeNode* p, TreeNode* q) {
    dfs(p,q,0);

    return res;
}

int main(){
	
	TreeNode *n1, *n1_left, *n1_right ;
	TreeNode  *n1_right_l, *n1_right_r ;

	n1 = create_node(0);
	n1_left = left_assign(4,n1);
//	n1_right = right_assign(20,n1);
	
//	n1_right_l = left_assign(15,n1_right);
//	n1_right_r = right_assign(7,n1_right);
	
	
	TreeNode *n2, *n2_left, *n2_right ;
	TreeNode  *n2_right_l, *n2_right_r ;

	n2 = create_node(0);
	n2_left = left_assign(5,n2);
//	n2_right = right_assign(20,n2);
	
//	n2_right_l = left_assign(15,n2_right);
//	n2_right_r = right_assign(7,n2_right);
	
	cout << levelOrderBottom(n1,n2);
}


