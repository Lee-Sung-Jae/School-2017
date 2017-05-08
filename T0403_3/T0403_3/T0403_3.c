#include <stdio.h>

int main(void) {
	printf("3 + 4는 7입니다.\n");
	printf("/%2d/ /%+2d/\n", 365, 365);
	printf("/%8d/ /%08d/ /%-8d/\n",365, 365, 365);
	printf("/%-8d/ /%+8d/\n", 365, 365);
	printf("/%4.2f/ /%3.1f/\n", 1234.56, 1234.56);
	printf("/%3.f/ /%10.3f/\n", 1234.56, 1234.56);
	printf("/%+4.2f/ /%010.1f/\n", 1234.56, 1234.56);
	printf("/%s/\n", "Lee Soon Sin");
	printf("/%20s/\n", "Lee Soon Sin");
	printf("/%20.3s/\n", "Lee Soon Sin");
	printf("/%-20.3s/\n", "Lee Soon Sin");
	return 0;
}