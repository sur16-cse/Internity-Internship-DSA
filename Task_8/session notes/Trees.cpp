
/*class Node{
	public:
		int data;
		Node *next;
	Node(){

	}
	Node(int data){
		this->data = val;
		next = NULL;
	}	
};

class Queue{
	public:
		abc()
};


int main(){
	//error
	Node *node = new Node();
	node->data = val;

}*/



/*******************************************Trees************************************ */

--> Trees

Tree is a non linear data structure and also not cyclic and connected also

						5
					  /  \
					 6    7
   					/ \
       			   8   9


1. BT (Binary Tree)
	a. BST (Binary Search Tree)
2. AVL (No one is going to ask otherthan ZOHO)
3. B+ Trees (When you have studied databases)
4. B Trees (When you have studied databases)

Conditions for BT
1. It will have maximum two children 

	a. BST (Binary Search Tree)
		Conditions:
			(i)--> my left node data must be smaller than the root data (Strictly)
			(ii) --> my right node data must be greater than the root data (Strictly)


struct TreeNode
{	
	int data;
	TreeNode *left, *right;
};


BST implementation main problem aati hai


// Vineet batayenge iteratively insertion in BST
TreeNode * insert(TreeNode *root, int val){
	if(root==NULL)
		return new TreeNode(val);

	if(root->data<val){
		return insert(root->right, val);
	}
	else if(root->data==val){
		return NULL;
	}else{
		return insert(root->left, val);
	}
}

// Deletion (Aditya Agarwal)
1. If the node which we are going to delete is having null (it is a leaf node)
	What is leaf node which is having no chld
2. If the node is having either left child/ right child (dono main se koi 1)
3. If the node is having both right child and left child


--> Tree Traverse
1. PRE- Order (iterative version GITA) --> root, left, right
2. In- Order (iterative version Surbhi) --> left, root, right
3. POST Order (iterative version Kushagra) --> left, right, root
4. Level order Traversal

						5
					  /  \
					 6    7
   					/ \
       			   8   9

preOrder --> 5,6,8,9,7
Inorder --> 8,6,9,5,7
PostOrder --> 8 9 6 7 5

void preOrderHelper(TreeNode *root, vector<int>& ans){
	if(root==NULL)
		return;
	ans.push_back(root->data);
	preOrderHelper(root->left, ans);
	preOrderHelper(root->right, ans);
}

vector<int> preOrder(TreeNode *root){
	vector<int>ans;
	preOrderHelper(root,ans);
	return ans;
}


void inOrderHelper(TreeNode *root, vector<int>& ans){
	if(root==NULL)
		return;
	inOrderHelper(root->left, ans);
	ans.push_back(root->data);
	inOrderHelper(root->right, ans);
}

vector<int> inOrder(TreeNode *root){
	vector<int>ans;
	inOrderHelper(root,ans);
	return ans;
}



void postOrderHelper(TreeNode *root, vector<int>& ans){
	if(root==NULL)
		return;
	postOrderHelper(root->left, ans);
	postOrderHelper(root->right, ans);
	ans.push_back(root->data);
}

vector<int> inOrder(TreeNode *root){
	vector<int>ans;
	postOrderHelper(root,ans);
	return ans;
}


						5  --> Level 1
					  /  \
					 6    7  --> Level 2
   					/ \
       			   8   9	--> Level 3


Level order Traversal 

5,6,7,8,9


--> Kind of a template

vector<int> levelOrderTraversal(TreeNode *root){
	vector<int>ans;
	if(root==NULL)
		return ans;
	queue<TreeNode *>q;
	q.push(root);
	while(q.empty()!=1){
		int currSize = q.size();
		for(int i=0;i<currSize;i++){
			TreeNode *temp = q.top();
			ans.push_back(temp->data);
			q.pop();
			if(temp->left!=NULL)
				q.push(temp->left);
			if(temp->right!=NULL)
				q.push(temp->right);
		}
	}
	return ans;
}

1. Left view of a Tree (gfg practice)
2. Right view of a Tree (gfg)
3. Top view of a Tree (gfg)
4. Bottom view of a Tree (gfg)
5. Boundary traversal of a Tree (gfg)
6. Diagnoal traversal of a tree (gfg)
7. Convert binary tree to doubly linked list (leetcode as well as gfg)
8. check if root to leaf path exists for a given sum it will return true and false leetcode 
	sum = 1

1,2,3
1,5

		1
	   / \
	  2   5
	 / \
	3   4

1 2 3 4 5

1 5 2 4 3 (Diagnoal traversal)
	
//Vikas --> Arrays (1.5) timing? 4 to 6 PM try 2 sorting bubble, insertion, selection







int maxelement 

int count [maxelement+1];

for(int i=0;i<=maxelement;i++){
	count[i] = 0;
}





int length(Node *head){
	if(head==NULL)
		return 0;
	return 1 + length(head->next);
}







