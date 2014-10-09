#include <stdio.h>
#include <string.h>

int main()
{
	int i, j, k, case_n, n, len;
	char str[401], c;

	fscanf(stdin, "%d", &case_n);
	for (i=0; i<case_n; i++)
	{
		fscanf(stdin, "%s", &str);
		len = strlen(str);
		
		j =0;
		printf("Case %d: ", i+1);
		while (1)
		{
			if (j >= len) break;

			c = str[j++];
			n = 0;
			while (1)
			{
				n = (n * 10) + str[j++] - 48;
				if (str[j] < 48 || str[j] >57) break;
			}
			for (k=0; k<n; k++)
			{
				printf("%c", c);
			}
		}
		
		printf("\n");
	}

	return 0;
}
