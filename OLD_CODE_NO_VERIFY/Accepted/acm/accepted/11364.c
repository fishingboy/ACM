#include <stdio.h>

int main()
{
	int case_n, i, j, n, pos, max, min;

	fscanf(stdin, "%d", &case_n);
	for (i=0; i<case_n; i++)
	{
		fscanf(stdin, "%d", &n);
		min = 999; max = 0;
		for (j=0; j<n; j++)
		{
			fscanf(stdin, "%d", &pos);
			if (pos > max) max = pos;
			if (pos < min) min = pos;
		}
		printf("%d\n", (max-min) * 2);
	}

	return 0;
}
