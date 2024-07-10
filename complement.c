#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char x[20];
    int len = 0;
    printf("Please enter a Binary Number: \n");
    // gets(x);
    scanf("%s", &x);
    printf("%s\n", x);

    len = strlen(x);
    printf("length: %d \n", len);

    int i, j;
    for (i = len - 1; x[i] != '1'; i--)
        ;
    printf("%d\n", i);

    for (j = i - 1; j >= 0; j--)
    {
        if (x[j] == '1')
        {
            x[j] = '0';
        }
        else
        {
            x[j] = '1';
        }
    }

    printf("%s", x);

    return 0;
}