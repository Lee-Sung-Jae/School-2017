#include <stdio.h>

#define PR printf
#define PROGRAM int main (void)

#define BEGIN {
#define END }

#define MAX(x, y) ((x > y) ? x : y)
#define MAX5(a, b, c, d, e) (MAX(MAX(a, MAX(b, c)), MAX(d, e)))

PROGRAM BEGIN
    PR("MAX(3, 6) = %d\n", MAX(3, 6));
    PR("MAX5(4, 7, 2, 9, 11) = %d\n", MAX5(4, 7, 2, 9, 11));
    PR("MAX5(65, 3, 56, 89, 12) = %d\n", MAX5(65, 3, 56, 89, 12));
END
