#include <stdio.h>
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

struct BTNode *sapling = NULL;

void add(struct BTNode *root, int x) {
	if (root == NULL)
		root = newNode(x);


	if (x < root->key)
		add(root->left, x);
	else if (x > root->key)
		add(root->right, x);
}

void insert(int x) {
	add(sapling, x);
}

char buff[100];

void traverse(struct BTNode* root) {
	if (root == NULL) {
		return;
	}

	traverse(root->left);
	sprintf(buff, "%c", itoa(root->key));
	traverse(root->right);
}

char* print() {
	traverse(sapling);
	return *buff;
}
