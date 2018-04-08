#include "proto.h"


void initTable(Table* A)
{
  int i,j;

  A->arr = (char**)malloc(3*sizeof(char*));

    for(j=0;j<3;j++)
       *(A->arr+j) = (char*)malloc(3*sizeof(char));

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
          A->arr[i][j] = '~';

    A->count = 0;
}