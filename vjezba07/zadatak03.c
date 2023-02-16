#include <stdio.h>
#include <string.h>

void izbaci_samoglasnike(char string[])
{
    int len, i, j;
    len = strlen(string);
    for (i = 0; i < len; i += 1)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            for (j = i; j < len; j += 1)
            {

                string[j] = string[j + 1];
            }
            i -= 1;
        }
    }
    printf("%s", string);
}

int main()
{
    char string[20] = "popokatepeetl";
    izbaci_samoglasnike(string);
    return 0;
}