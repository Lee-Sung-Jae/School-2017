#include <stdio.h> // ǥ�� ����� ��� ����

int main(void) { // ���α׷� ������
    int sort[5], i, j, tmp; // ���� ����

	// ����ڿ��Լ� ���� ��ų �������� �Է��ϵ��� ��û, sort ���� �迭�� ����
	for(i = 0; i < 5; i++) {
		printf("%d��° ���� �Է� : ", i + 1);
		scanf("%d", &sort[i]);
	}

    printf("\n");

    for(i = 0; i < 5; i++) { // i�� �ø��� ������
        for(j = 0, tmp; j < i; j++) { // j�� �ø��� ������
            if(sort[i] < sort[j]) { // ���� sort[i]�� sort[j]���� �۴ٸ� ����
                tmp = sort[i]; // �ӽ� ������ sort[i]�� ����
                sort[i] = sort[j]; // sort[i]�� sort[j]�� ����
                sort[j] = tmp; // �ӽ� ������ �ִ� ������ sort[i]���� sort[j]���� ����
            }
        }
    }

    for(i = 0; i < 5; i++) { // ����� ���� �ݺ���
        printf("%d��°�� ���� ���� : %d\n", i + 1, sort[i]);
    }

    return 0; // ���α׷� ����
}
