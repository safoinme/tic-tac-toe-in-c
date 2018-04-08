#include "proto.h"

int checkCase(int x,int y,Table *A)
{
    return !( x >= 0 && \
              x < 3  && \
              y >= 0 && \
              y < 3  && \
              A->arr[x][y] == '~'
            );
}

int insert(int x, int y, Table *A) {
	if (checkCase(x, y, A) == 1)
		return 1;

	if (A->count % 2) {
		A->arr[x][y] = 'O';
		A->count++;
		return 0;
	}
	else {
		A->arr[x][y] = 'X';
		A->count++;
		return 0;
	}
}
