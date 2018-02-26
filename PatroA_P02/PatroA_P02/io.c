#include <stdio.h>
#include "io.h"

char ask() {
	char c = ' ';

	printf("Enter [i]nsert, [s]earch, inorder [t]raversal, or [q]uit: ");
	scanf_s("%c", &c);

	return c;
}

int askInsert() {
	int x = -1;

	printf("Enter a number to insert: ");
	scanf_s("%d", &x);

	return x;
}

void askTraverse(int * buff) {
	for (int i = 0; i < strlen(buff); i++) {
		if (buff[i] >= 0) {
			printf("%d", buff[i]);
		}
	}
}