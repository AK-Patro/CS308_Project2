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
	//int buff[100];
	int dirtFlag = 0;
	int loopFlag = 1;
	struct BTNode *sapling = NULL;

	/*sapling = insert(sapling, 4);
	insert(sapling, 2);
	insert(sapling, 3);
	insert(sapling, 1);
	insert(sapling, 10);
	*/
	
	while (loopFlag == 1) {
		ans = ask();

		if (ans == 'i' && dirtFlag == 0) {
			sapling = insert(sapling, askInsert());
			dirtFlag = 1;
		}
		else if (ans == 'i' && dirtFlag == 1) {
			insert(sapling, askInsert());
		}
		else if (ans == 't') {
			int buff[100] = { 0 };
			print(sapling, buff);
			askTraverse(buff);
		}
		else if (ans == 's') {
			int x = askSearch();
			searchResult(search(sapling, x), x);
		}
		else if (ans == 'q') {
			quit(sapling);
			//loopFlag = 0;	//uncomment if you want quit to stop the loop
		}
	}
}