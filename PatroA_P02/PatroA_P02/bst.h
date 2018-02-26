#pragma once
#ifndef  _bst_h
#define _bst_h

//struct BTNode *newNode(int);
struct BTNode * insert(struct BSTNode*, int);
char* print(struct BSTNode*, char*);
struct BTNode *newNode(int);
int search(struct BTNode*, int);
void quit(struct BTNode*);

#endif // ! _bst_h
