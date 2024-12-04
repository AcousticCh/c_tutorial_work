#include "stdio.h"

int main()
{
	int a = 3;
	int b = 7;

	int *pA = &a;
	int *pB = &b;

	printf("%d\n", *pA);

	return 0;
}
