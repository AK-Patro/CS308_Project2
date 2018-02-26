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
	else if (x == root->key)
		return root;

	return root;
}


void traverse(struct BTNode* root, int * buff) {
	if (root == NULL) {
		return;
	}
	
	traverse(root->left, buff);
	//sprintf(buff + nDigits(root->key), "%d", root->key);
	//sprintf(buff + nDigits(root->key) + 1, ' ');
	buff[nDigits(root->key) - 1] = root->key;
	traverse(root->right, buff);
}

void print(struct BTNode* root, int * buff) {
	traverse(root, buff);
	//return *buff;
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

void quit(struct BTNode* root) {
	if (root == NULL) {
		return;
	}

	quit(root->left);
	free(root);
	quit(root->right);
}

int count = 0;

int nDigits(int n) {
	/*
	while (n != 0) {
		n = n / 10;
		count++;
	}
	return count;*/
	return ++count;
}
