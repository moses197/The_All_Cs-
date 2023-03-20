#include <stdio.h>

int main(void)
{
	int a[10] = {0, 11, 22, [5]=55, 66, 77};

	for (int i = 0; i<10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}