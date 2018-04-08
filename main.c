#include <stdio.h>
#include "proto.h"

int main(void) {
	Table a;
	int c;
	c=all(a);
	system("cls");
	if (c%2)
	printf("\nWINNER IS FIRST PLAYER\n");
	else
    printf("\nWINNER IS SECOND PLAYER\n");
}
