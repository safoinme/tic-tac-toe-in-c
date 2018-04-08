#ifndef PRO
#define PRO

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Table{
    char **arr;
    int  count;
} Table;

int all(Table a);
void initTable(Table* A);
int  checkCase(int x,int y,Table *A);
int  winner (Table *xo,int x, int y);
void printTable(Table *T);
int insert(int x, int y, Table *A);

#endif
