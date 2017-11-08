#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char buffer[512];
    FILE *input = fopen("./T1108_2-I.txt", "r"), *output = fopen("./T1108_2-O.txt", "w");

    if(input == (FILE *) NULL) {
        printf("파일을 찾을 수 없습니다. 파일을 생성합니다..");
        fclose(fopen("./T1108_2-I.txt", "w"));

        return 1;
    }

    while(fgets(buffer, 512, input) != EOF)
        fputs(buffer, output);

    fclose(input);
    fclose(output);

    return 0;
}
