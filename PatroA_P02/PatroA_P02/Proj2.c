/**********************************************
* Name: Aswini Patro *
* Date: 2/25/18 *
* Assignment: Project 2: Sequence and Order validation *
***********************************************
* Create a program that can as for a command to either
  insert, search, or print nodes of a binary search
  tree.					*
***********************************************/

#include <stdio.h>
#include "io.h"
#include "bst.h"

/*************************************************
* Description: Method run entire program*
* Precondition: Input is nothing*
* Post condition: Returns exit status as int*
**************************************************/
int main() {
	char ans;
	int dirtFlag = 0;	//flag for checking whether this is the first iteration or not
	int loopFlag = 1;	//flag to stay in loop
	struct BTNode *sapling = NULL;
	
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