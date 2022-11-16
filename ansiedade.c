#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[4];
    int tri = 0;
    for (int i = 0, c = 0; scanf("%s", s) == 1; i++, c = (i % 10 == 0 ? 0 : c))
    {
        if (strcmp(s, "sim") == 0)
        {
            c++;
            tri += (c == 2);
        }
    }
    printf("%d\n", tri);

    return 0; 
}
