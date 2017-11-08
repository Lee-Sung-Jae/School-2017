#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int ch;
    long int start;
    FILE *input = fopen("./T1108_4.txt", "r"), *output = fopen("./T1108_4-Reversed.txt", "w");

    if(input == NULL) {
        printf("파일이 존재하지 않습니다. 파일을 생성합니다..");
        fclose(fopen("./T1108_4.txt", "w"));

        return 1;
    }

    fseek(input, 0L, 0);
    start = ftell(input);
    fseek(input, -1L, 2);

    while(ftell(input) >= start) {
        ch = getc(input);
        putc(ch, output);

        ch == 10 ? fseek(input, -3L, 1) : fseek(input, -2L, 1);
    }

    fclose(input), fclose(output);

    return 0;
}
