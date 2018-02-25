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

	ans = ask();

	insert(4);
	strcpy(*report, print());
	printf("%s", print());
}