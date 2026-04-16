#include <stdio.h>

int main(){

    int a;
    /* scanf requires the address of the variable */
    scanf("%d", &a);
    /* remove stray semicolon so the if controls the printf */
    if (a == 5)
{        printf("Hello world\n");
}   else
{        printf("Goodbye world\n");
}
    return 0;
}