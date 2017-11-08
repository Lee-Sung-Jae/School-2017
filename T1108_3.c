#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int kor, eng, math, sum;
    char name[20];
    FILE  *input = fopen("./T1108_3.dat", "r"), *output = fopen("./T1108_3.rpt", "w");

    if(input == (FILE *) NULL) {
        printf("������ ã�� �� �����ϴ�. ������ �����մϴ�..");
        fclose(fopen("./T1108_3.dat", "w"));

        return 1;
    }

    while(fscanf(input, "%s %d %d %d", &name, &kor, &eng, &math) != EOF) {
        sum = kor + eng + math;

        fprintf(output, "%s, %3d, %3d, %3d, %5.2f\n", name, kor, eng, math, sum, sum / 3.0);
        fprintf(stdout, "%s, %3d, %3d, %3d, %5.2f\n", name, kor, eng, math, sum, sum / 3.0);
    }

    fclose(input);
    fclose(output);

    return 0;
}
