#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable: 4996)

struct BTNode {
	int key;
	struct BTNode *left;
	struct BTNode *right;
};

struct BTNode *newNode(int x)
{
	struct BTNode *temp = malloc(sizeof(struct BTNode));
	
	temp->key = x;
	temp->left = NULL;
	temp->right = NULL;
	
	return temp;
}


struct BTNode * insert(struct BTNode *root, int x) {
	if (root == NULL)
		return newNode(x);


	if (x < root->key)
		root->left = insert(root->left, x);
	else if (x > root->key)
		root->right = insert(root->right, x);
}


void traverse(struct BTNode* root, char * buff) {
	if (root == NULL) {
		return;
	}

	traverse(root->left, buff);
	sprintf(buff + strlen(buff), "%d", root->key);
	traverse(root->right, buff);
}

char* print(struct BTNode* root, char * buff) {
	traverse(root, buff);
	return *buff;
}

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
