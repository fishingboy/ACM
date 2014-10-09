#include <stdio.h>

int main()
{
    int i, n, r;
    int is_first, people, list[10001];
    int answer_n;
    int debug = 0;

    answer_n = -1;
    while(fscanf(stdin, "%d %d", &n, &r))
    {
        if (feof(stdin)) break;

        if (debug) printf("n=%d, r=%d\n", n, r);

        if (answer_n != -1)
        {
            answer_output(answer_n, list);
            printf("\n");
        }

        /* clear name book */
        for (i = 1; i <= n; i++)
        {
            list[i] = 0;
        }

        /* start check */
        for (i=1; i<=r; i++)
        {
            fscanf(stdin, "%d", &people);
            if (debug) printf("people=%d\n", people);

            list[people] = 1;
        }

        answer_n = n;
    }  

    answer_output(answer_n, list);
    printf("\n");

    return 0;
}

int answer_output(int answer_n, int answer_list[])
{
    int i, is_first;

    /* output */
    is_first = 1;
    for (i=1; i<=answer_n; i++)
    {
        if (answer_list[i] == 0)
        {
            printf("%d ", i);                    
            is_first = 0;
        }
    }

    if (is_first == 1) printf("*");
    return 0;
}