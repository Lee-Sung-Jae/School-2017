#include <stdio.h>

int main(void) {
    #define TEST 100

    #ifdef TEST
        printf("TEST is defined.\n");
    #endif // TEST

    #if TEST > 100
        printf("TEST is %d.", TEST);
    #elif TEST == 100
        printf("TEST is %d.\n", TEST + 100);
        printf("Compound statement.\n");
    #elif TEST < 100
        printf("TEST is %d.\n", TEST - 100);
    #endif // TEST

    #undef TEST

    #define SIZE

    #ifdef SIZE
        printf("SIZE if defined.\n");
    #endif // SIZE

    #ifndef TEST
        printf("TEST is not defined.\n");
    #endif // TEST

    return 0;
}
