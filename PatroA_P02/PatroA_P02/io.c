#include <stdio.h>
#include "io.h"

char ask() {
	char c = ' ';

	printf("\nEnter [i]nsert, [s]earch, print inorder [t]raversal, or [q]uit: ");
	scanf_s(" %c",&c);

	return c;
}

int askInsert() {
	int x = -1;

	printf("Enter a number to insert: ");
	scanf_s("%d", &x);

	return x;
}

void askTraverse(int * buff) {
	for (int i = 0; i < 100; i++) {
		if (buff[i] > 0) {
			printf(" %d", buff[i]);
			printf(" ");
		}
	}
}

int askSearch() {
	int x = -1;

	printf("Enter a number to search for: ");
	scanf_s("%d", &x);

	return x;
}

void searchResult(int flag, int x) {
	if (flag == 1) {
		printf("The number %d is in the tree", x);
	}
	else if (flag == 0) {
		printf("The number %d is not in the tree", x);
	}
}