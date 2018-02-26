/**********************************************
* Name: Aswini Patro *
* Date: 2/25/18 *
* Assignment: Project 2: Sequence and Order validation *
***********************************************
* The BST node file that handles all logic relating to 
  binary search tree nodes. *
***********************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bst.h"
#pragma warning (disable: 4996)

/*************************************************
* Description: Method to construct a new BST node*
* Precondition: Input is the value of the key for the BST Node *
* Post condition: Returns a BST Node with null children *
**************************************************/
struct BTNode *newNode(int x)
{
	struct BTNode *temp = malloc(sizeof(struct BTNode));
	
	temp->key = x;
	temp->left = NULL;
	temp->right = NULL;
	
	return temp;
}

/*************************************************
* Description: Method to insert a BST node in the tree*
* Precondition: Input is the root tree and the key to be
	inserted as a new node*
* Post condition: Returns the same root node *
**************************************************/
struct BTNode * insert(struct BTNode *root, int x) {
	if (root == NULL)
		return newNode(x);


	if (x < root->key)
		root->left = insert(root->left, x);
	else if (x > root->key)
		root->right = insert(root->right, x);
	else if (x == root->key)
		return root;

	return root;
}

/*************************************************
* Description: Method to move across a tree and add to a int array*
* Precondition: Input is the root tree and the int array to be added to *
* Post condition: Returns nothing, changes the values of the int array as it moves along*
**************************************************/
void traverse(struct BTNode* root, int * buff) {
	if (root == NULL) {
		return;
	}
	
	traverse(root->left, buff);
	buff[nDigits(root->key) - 1] = root->key;
	traverse(root->right, buff);
}

/*************************************************
* Description: Method to traverse a tree, calls other private method*
* Precondition: Input is the root tree and the int array to be added to *
* Post condition: Returns nothing, changes the values of the int array as it moves along*
**************************************************/
void print(struct BTNode* root, int * buff) {
	traverse(root, buff);
}

/*************************************************
* Description: Method to search a tree for a key value, and check if its there*
* Precondition: Input is the root tree and the int key to search for *
* Post condition: Returns an int as a flag for whether or not the value exists in the tree*
**************************************************/
int search(struct BTNode* root, int key) {
	if (root == NULL)
		return 0;
	else if (root->key == key)
		return 1;

	else if (key < root->key)
		return search(root->left, key);
	else if(key > root->key)
		return search(root->right, key);
}

/*************************************************
* Description: Method to free up allocated memory for all nodes in a tree*
* Precondition: Input is the root tree*
* Post condition: Returns nothing*
**************************************************/
void quit(struct BTNode* root) {
	if (root->left != NULL) {
		quit(root->left);
	}
	else if (root->right != NULL) {
		quit(root->right);
	}


	free(root);

}

int count = 0;

/*************************************************
* Description: Method to count an index for the buffer*
* Precondition: Input is nothing*
* Post condition: Returns nothing*
**************************************************/
int nDigits() {
	return ++count;
}
