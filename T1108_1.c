#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int ch;
    FILE *input = fopen("./T1108_1.txt", "r"), *output = fopen("./T1108_1.txt", "w");

    if(input == (FILE *) NULL) {
        printf("������ ã�� �� �����ϴ�.");

        return 1;
    }

    while(ch = fgetc(input) != EOF)
        fputc(ch, output);

    printf("EOF(End of File)�� ��Ÿ���� ������ �����մϴ�.");

    fclose(input);
    fclose(output);

    return 0;
}
