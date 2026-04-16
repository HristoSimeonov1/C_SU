#include <stdio.h>
#include <string.h>


int main(){
    char sh = 'h';
    char sh2 = 'v';
    char *p = &sh2;

    for (;;) {
        printf("%c", *p);
        p++;
    }
}