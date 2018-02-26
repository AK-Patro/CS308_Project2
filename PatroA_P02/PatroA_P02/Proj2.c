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
	char buff[100];
	//char * buff = malloc(20*sizeof(char));
	struct BTNode *sapling = NULL;

	ans = ask();

	sapling = insert(sapling, 4);
	insert(sapling, 2);
	insert(sapling, 10);

	int x = search(sapling, 2);
	int y = search(sapling, 11);

	print(sapling, buff);
	printf("%s", buff);
}