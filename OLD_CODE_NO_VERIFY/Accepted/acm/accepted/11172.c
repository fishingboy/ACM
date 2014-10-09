#include <stdio.h>

int main()
{
	int case_n, i, n1, n2;
	
	fscanf(stdin, "%d", &case_n);
	for (i=0; i<case_n; i++)
	{
		fscanf(stdin, "%d %d", &n1, &n2);
		if (n1 == n2)
			printf("=\n");
		else if (n1 > n2)
			printf(">\n");
		else
			printf("<\n");		
	}

	return 0;
}
