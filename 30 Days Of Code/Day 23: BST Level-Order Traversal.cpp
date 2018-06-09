// https://www.hackerrank.com/challenges/30-binary-trees/problem
/* 
* When ever we hear the word BFS or Level_Order_Traversal, the DS which we use to implement it should flash in our mind.
* ie. Queue
* Then, just visualize the flow of the process (or) revise the procces
* Remember, Repetition is the mother of learning!
* Then try to implement it.
*/
#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }
// ---------Code-----------
	void levelOrder(Node * root){
		queue<Node*> q;
		if(root == NULL)
		    return;
		q.push(root);
		while(!q.empty())
		{
		    // Push the first Node ie. root node
		    Node* current = q.front();
			
		    // Push the children corresponding to the current Node
		    if(current->left != NULL) q.push(current->left);
		    if(current->right != NULL) q.push(current->right);
			
		    // Visit the current Node
		    cout << current->data << " ";
			
		    // Remove the current Node from the queue
		    q.pop();
		}
	}
//-----------------------------------
};//End of Solution
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}
