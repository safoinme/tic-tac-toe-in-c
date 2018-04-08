#include "proto.h"


void printTable(Table *T) {
	int i, j;
	system("cls");
	printf("\n\n\t");
	for (i=0; i<3; ++i) {
		for (j=0; j<3; ++j)
			if (j == 2 && i != 2)
				printf("%c\n\t-------------\n\t", T->arr[i][j]);
			else if (j==2 && i == 2)
				printf("%c\n\n\n", T->arr[i][j]);
			else
				printf("%c  |  ", T->arr[i][j]);
	}

}
