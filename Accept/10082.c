#include <stdio.h>

int main()
{
    char key[26] = " VXSWDFGUHJKNBIO EARYCQZT ";
    char word;

    while (scanf("%c", &word) == 1)
    {
        if (word >= 65 && word <= 90)
            printf("%c", key[word - 65]);
        else if (word == '1')
            printf("`");
        else if (word == '2')
            printf("1");
        else if (word == '3')
            printf("2");
        else if (word == '4')
            printf("3");
        else if (word == '5')
            printf("4");
        else if (word == '6')
            printf("5");
        else if (word == '7')
            printf("6");
        else if (word == '8')
            printf("7");
        else if (word == '9')
            printf("8");
        else if (word == '0')
            printf("9");
        else if (word == '-')
            printf("0");
        else if (word == '=')
            printf("-");
        else if (word == '[')
            printf("P");
        else if (word == ']')
            printf("[");
        else if (word == '\\')
            printf("]");
        else if (word == ';')
            printf("L");
        else if (word == '\'')
            printf(";");
        else if (word == ',')
            printf("M");
        else if (word == '.')
            printf(",");
        else if (word == '/')
            printf(".");
        else
            printf("%c", word);
    }
    return 0;
}