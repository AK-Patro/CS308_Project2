#include <stdio.h>
#include "io.h"

char ask() {
	char c = ' ';

	printf("Enter [i]nsert, [s]earch, inorder [t]raversal, or [q]uit: ");
	scanf_s("%c", &c);
	printf("\n");

	return c;
}