#include <stdio.h>

void base3_number(int n)
{
	int m=0, arr[25], index=0, i;

	if (n == 0) printf("0");
	while (n>0)
	{
		arr[index++] = n%3;
		n /= 3;
	}
	for (i=index-1; i>=0; i--)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}

int main()
{
	int n;

	while (fscanf(stdin, "%d", &n))
	{
		if (n < 0) break;
		base3_number(n);
	}
	return 0;
}
