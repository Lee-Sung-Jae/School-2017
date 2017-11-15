#include <stdio.h>
#define DEBUG 0

int main(void) {
    int test, value;
    test = 5;

    #if DEBUG
        printf("DEBUG test = %d\n", test);
    #endif // DEBUG

    value = test + 8;

    printf("value = %d\n", value);

    return 0;
}
