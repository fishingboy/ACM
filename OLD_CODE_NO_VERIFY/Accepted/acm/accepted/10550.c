#include <stdio.h>

int main()
{
    int start, pw1, pw2, pw3, sum, curr_no, add;
    while (fscanf(stdin, "%d %d %d %d", &start, &pw1, &pw2, &pw3))
    {
        if (start==0 && pw1==0 && pw2==0 && pw3==0) break;
        curr_no = start;
        sum = 120;

        /* step 1 */
        add = curr_no - pw1;
        add = (add >0) ? add : add+40;
        sum += add;
        curr_no = pw1;
        
        /* step 2 */
        add = pw2 - curr_no;
        add = (add >0) ? add : add+40;
        sum += add;
        curr_no = pw2;

        /* step 3 */
        add = curr_no - pw3;
        add = (add >0) ? add : add+40;
        sum += add;

        printf("%d\n", sum*9);

    }
    return 0;
}
