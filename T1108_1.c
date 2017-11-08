#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int ch;
    FILE *input = fopen("./T1108_1.txt", "r"), *output = fopen("./T1108_1.txt", "w");

    if(input == (FILE *) NULL) {
        printf("파일을 찾을 수 없습니다.");

        return 1;
    }

    while(ch = fgetc(input) != EOF)
        fputc(ch, output);

    printf("EOF(End of File)가 나타나여 실행을 종료합니다.");

    fclose(input);
    fclose(output);

    return 0;
}
