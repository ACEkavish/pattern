#include <stdio.h>

int main()
{
    int i, j;
    char ch = 'a';

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 1)
                printf("%c", ch);
            else
                printf("%c", ch - 32);

            ch++;
        }
        printf("\n");
    }

    return 0;
}
