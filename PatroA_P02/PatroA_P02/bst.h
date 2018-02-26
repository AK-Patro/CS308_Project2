#pragma once
#ifndef  _bst_h
#define _bst_h

//struct BTNode *newNode(int);
struct BTNode * insert(struct BSTNode*, int);
void print(struct BSTNode*, int*);
struct BTNode *newNode(int);
int search(struct BTNode*, int);
void quit(struct BTNode*);

#endif // ! _bst_h
