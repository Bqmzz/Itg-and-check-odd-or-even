#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int scanItg()
{
	int x;
	printf("Input float number : ");
	scanf_s("%d", &x);
	if ((x % 2) == 0) {
		printf("%d is Even", x);
	}
	else {
		printf("%d is Odd", x);
	}
	printf("\n");
	return x;
}
int main()
{
	int number;
	number = scanItg();
	printf("Integer is %d", number);
	return 0;
}