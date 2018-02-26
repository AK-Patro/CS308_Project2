/**********************************************
* Name: Aswini Patro *
* Date: 2/25/18 *
* Assignment: Project 2: Sequence and Order validation *
***********************************************
* Header file for Binary Search Tree node, 
  includes the definition for a BST node and
  the prototypes for functions relating to BST*
***********************************************/

#pragma once
#ifndef  _bst_h
#define _bst_h

typedef struct BTNode {		//The user defined struct for a tree node
	int key;
	struct BTNode *left;
	struct BTNode *right;
} BTNode;

struct BTNode * insert(struct BSTNode*, int);
void print(struct BSTNode*, int*);
struct BTNode *newNode(int);
int search(struct BTNode*, int);
void quit(struct BTNode*);

#endif // ! _bst_h
