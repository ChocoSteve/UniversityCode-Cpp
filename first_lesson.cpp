#include <stdio.h>
int main()
{
	int a, b, max;
	scanf_s("%d,%d", &a, &b);
	if (a > b) max=a;
	else max=b;
	printf("%d", max);
	return 0;
}
