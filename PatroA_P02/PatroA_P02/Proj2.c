/**********************************************
* Name: Aswini Patro *
* Date: 2/25/18 *
* Assignment: Project 2: Binary Trees *
***********************************************
* Create a program that can as for a command to either
  insert, search, or print nodes of a binary search
  tree.					*
***********************************************/

#include <stdio.h>
#include "io.h"
#include "bst.h"

int main() {
	char ans;
	int buff[100];
	int dirtFlag = 0;
	//char * buff = malloc(20*sizeof(char));
	struct BTNode *sapling = NULL;

	ans = ask();

	sapling = insert(sapling, 4);
	insert(sapling, 2);
	insert(sapling, 3);
	insert(sapling, 1);
	insert(sapling, 10);

	if (ans == 'i' && dirtFlag == 0) {
		sapling = insert(sapling, askInsert());
	}
	else if (ans == 'i' && dirtFlag == 0) {
		insert(sapling, askInsert());
	}
	else if (ans == 't') {
		print(sapling, buff);
		askTraverse(buff);
	}
	else if (ans == 's') {

	}




	/*
	sapling = insert(sapling, 4);
	insert(sapling, 2);
	insert(sapling, 10);

	int x = search(sapling, 2);
	int y = search(sapling, 11);*/

	//quit(sapling);

	//print(sapling, buff);
	//printf("%s", buff);
}