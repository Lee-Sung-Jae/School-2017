#include <stdio.h>

int main(void) {
    int i;

    printf("2�� \t\t3�� \t\t4�� \t\t5�� \t\t6�� \t\t7�� \t\t8�� \t\t9��\n");

    for(i = 1; i < 10; i++) {
        printf("2 * %d = %d\t", i, 2 * i);
        printf("3 * %d = %d\t", i, 3 * i);
        printf("4 * %d = %d\t", i, 4 * i);
        printf("5 * %d = %d\t", i, 5 * i);
        printf("6 * %d = %d\t", i, 6 * i);
        printf("7 * %d = %d\t", i, 7 * i);
        printf("8 * %d = %d\t", i, 8 * i);
        printf("9 * %d = %d\t", i, 9 * i);
        printf("\n");
    }

    return 0;
}
