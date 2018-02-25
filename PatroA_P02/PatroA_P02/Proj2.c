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
	char report[100];
	char buff[100];
	//char* buff = malloc(40 * sizeof(char));
	struct BTNode *sapling = NULL;

	ans = ask();

	sapling = insert(sapling, 4);
	insert(sapling, 2);
	insert(sapling, 10);
	print(sapling, buff);
	//strcpy(report, print(sapling, buff));
	printf("%s", buff);
}