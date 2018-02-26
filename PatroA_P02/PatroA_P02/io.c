/**********************************************
* Name: Aswini Patro *
* Date: 2/25/18 *
* Assignment: Project 2: Sequence and Order validation *
***********************************************
* The IO file that prints out statements for users
  and takes in there input for arguements*
***********************************************/

#include <stdio.h>
#include "io.h"

/*************************************************
* Description: Method to ask user for an order*
* Precondition: Input is nothing*
* Post condition: Returns the answer as a char*
**************************************************/
char ask() {
	char c = ' ';

	printf("\nEnter [i]nsert, [s]earch, print inorder [t]raversal, or [q]uit: ");
	scanf_s(" %c",&c);

	return c;
}

/*************************************************
* Description: Method to ask user for a number to insert*
* Precondition: Input is nothing*
* Post condition: Returns the number to insert*
**************************************************/
int askInsert() {
	int x = -1;

	printf("Enter a number to insert: ");
	scanf_s(" %d", &x);

	return x;
}

/*************************************************
* Description: Method to print all elements in an array*
* Precondition: Input is int array of all nodes in tree*
* Post condition: Returns nothing*
**************************************************/
void askTraverse(int * buff) {
	for (int i = 0; i < 100; i++) {
		if (buff[i] > 0) {
			printf(" %d", buff[i]);
			printf(" ");
		}
	}
}

/*************************************************
* Description: Method to ask user for number to search for*
* Precondition: Input is nothing*
* Post condition: Returns the answer as an int*
**************************************************/
int askSearch() {
	int x = -1;

	printf("Enter a number to search for: ");
	scanf_s(" %d", &x);

	return x;
}

/*************************************************
* Description: Method to state whether or not a number is in tree*
* Precondition: Input is the int flag for whether a number is or not, and the number itself*
* Post condition: Returns nothing*
**************************************************/
void searchResult(int flag, int x) {
	if (flag == 1) {
		printf("The number %d is in the tree", x);
	}
	else if (flag == 0) {
		printf("The number %d is not in the tree", x);
	}
}