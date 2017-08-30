#include <stdio.h>

int main(void) {
    char str[4];
    int i;

    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = '\0';

    for(i = 0; i < 4; i++)
        printf("%c", str[i]);

    return 0;
}
