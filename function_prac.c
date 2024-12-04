#include <stdio.h>

//make a function to calculate area of a triangle

int getTriangleArea(int base, int height)
{
	int area;
	area = base * height / 2;

	return area;
} // end of get triangle area


int main()
{
	int b, h, a;
	printf("base: ");
	fflush(stdout);
	scanf("%d", &b);

	printf("height: ");
	fflush(stdout);
	scanf("%d", &h);

	a = getTriangleArea(b, h);

	printf("area = %d\n", a);
	fflush(stdout);

	return 0;
} // end of main
