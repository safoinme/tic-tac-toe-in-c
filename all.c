#include "proto.h"

int all(Table a)
{
    int x, y, tmp, b;
    initTable(&a);
    do
    {
        printTable(&a);
        printf("\ncount : %d\n", a.count);
        printf("which case you wanna try ? (x , y) --> ");
        scanf("%d %d", &x, &y);
        insert(x, y, &a);
        b=winner(&a, x, y);
    }
    while (  b == 0 && a.count<9);
    if (b==0 && a.count==9){
            printf("\t\t\tNO ONE HAS WIN!!!!!!");
    printf("\n\t<================IF YOU WANT PLAY AGAIN PRESS ENTER================>\n");
    getch();
        return all(a);}
    return a.count;
}
