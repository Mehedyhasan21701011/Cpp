#include <stdio.h>
#include <string.h>
#define maxchar 20
int main()
{

    char strings[5][maxchar], dummy[5][maxchar];
    // to store 5 String which are maximum 20 char
    int i, j;

    for (i = 0; i < 5; i++)
    {
        scanf("%19s", strings[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%s ", strings[i]);
    }
}