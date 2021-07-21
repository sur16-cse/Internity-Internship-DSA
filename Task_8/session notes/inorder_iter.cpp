//Inorder Traversal iterative way
/*first visit left sub tree then root and later right sub tree
order:=
left 
root
right

-- recursion uses stack implicitly
--- recursive to iterative we must use of stack 
            
                    A 
                  /  \                 
                  B   G
                 / \ / \
                D  T R O
                   /
                   C                |D     |     |C   |     |   |    |
                                    |B     |B    |T   |T    |   |R   |
                                    |A     |A    |A   |A    |A  |G   |G |O
                            
    
//output--> D B C T A R G O*/

#include<bits/stdc++.h>
using namespace std;

 class TreeNode{
   public: 
     char val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(char c){
       val=c;
       left=NULL;
       right=NULL;
     }
 };

void inorderTraversal(TreeNode* root){
  stack<TreeNode*>st;
  TreeNode* curr=root;

  while(curr!=NULL || !st.empty()){
    if(curr!=NULL){
      st.push(curr);
      curr=curr->left;
    }
    else
    {
      curr=st.top();
      st.pop();
      cout<<curr->val<<" ";
      curr=curr->right;
    }
  }
}

//o(n)-->time complexity

//Application:-
//use in binary search tree
//we get an order in non increasing order

int main(){
    TreeNode* root=new TreeNode('A');
    root->left=new TreeNode('D');
    root->right=new TreeNode('T');
    root->left->left=new TreeNode('H');
    root->left->right=new TreeNode('L');
    root->left->right->left=new TreeNode('P');
    root->right=new TreeNode('Z');
    root->right->right=new TreeNode('C');
    cout<<"Inorder Traversal"<<" ";
    inorderTraversal(root);
    cout<<endl;
}