#include <stdio.h>

int multi(int, int);

int main(void) {
    int i, o;

    for(i = 1; i <= 9; i++) {
        for(o = 1; o <= 9; o++) {
            (o <= 8) ? printf("%d * %d = %d\t", i, o, multi(i, o)) : printf("%d * %d = %d\n", i, o, multi(i, o));
        }
    }

    return 0;
}

int multi(i, o) {
    return i * o;
}
