#include <stdio.h>

int main()
{
    int l, i, length, min, find;
    char road[2000001], prev_c;
    
    while (fscanf(stdin, "%d", &l), l>0)
    {
        fscanf(stdin, "%s", road);
        prev_c='.'; min=9999999; length=find=0;
        for (i=0; i<l; i++)
        {
            if (find == 1) break;
            if (prev_c != '.') length++;
            switch (road[i])
            {
                case 'R':
                    if (prev_c == 'D')
                    {
                        if (length < min) min = length;
                        length = 0;
                    }
                    else if (prev_c == 'R') length = 0;
                    prev_c = road[i];
                    break;
                case 'D':
                    if (prev_c == 'R')
                    {
                        if (length < min) min = length;
                        length = 0;
                    }
                    else if (prev_c == 'D') length = 0;
                    prev_c = road[i];
                    break;
                case 'Z':
                    min = 0;
                    find = 1;
                    break;
                case '.':
                    break;
            }
        }
        printf("%d\n", min);
    }


    return 0;
}
