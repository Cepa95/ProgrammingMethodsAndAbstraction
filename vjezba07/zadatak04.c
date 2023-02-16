#include <stdio.h>
#include<string.h>

int provjera_stringa(int* string)
{
    int a, b;

    char* prvi = strchr(string, string[0]);
    if (prvi == NULL)
    {
        printf("%s", prvi);
        return -1;
    }
    char* drugi = strchr(prvi + 1, string[0]);
    if (drugi == NULL)
    {
        printf("%s", drugi);
        return -1;
    }
    a = strlen(prvi);
    b = strlen(drugi);
    printf("Slovo se nalazi na: %d. mjestu", a - b + 1);
}

int main(void)
{
    char string[] = "ONoffON";
    provjera_stringa(string);
    return 0;
}