#include <stdio.h>
#include "T1115_2.h"

PROGRAM BEGIN
    PR("MAX(7, 5) = %d\n", MAX(7, 5));
    PR("MAX5(4, 7, 17, 12, 9) = %d\n", MAX5(4, 7, 17, 12, 9));
    PR("MAX7(65, 3, 56, 89, 12, 34, 24) = %d\n", MAX(MAX5(65, 3, 56, 89, 12), MAX(34, 24)));
END
