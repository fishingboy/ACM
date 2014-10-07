#include <stdio.h>
#include <string.h>
#include <math.h>

int is_prime(long n)
{
    long i, j;
    j = pow(n, 0.5);
    for (i=2; i<=j; i++)
    {
    	if (n % i==0) break;
    }
    if (i>j) return 1;
    return 0;
}

int main()
{
    char s[21];
    long i,word,word_sum;
    while (scanf("%s",s)==1)
    {
        word_sum=0;
        for (i=1;i<=strlen(s);i++)
        {
            word = s[i-1];
            if (word>='a' && word<='z') word_sum += word-'a'+1;
            if (word>='A' && word<='Z') word_sum += word-'A'+27;
        }
        
        if (is_prime(word_sum))
        {
            printf("It is a prime word.\n");
        }
        else
        {
            printf("It is not a prime word.\n");
        }
    }
    return 0;
}