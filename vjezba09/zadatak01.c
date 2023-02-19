#include <stdio.h>

int findSize(char* dokument)
{
    FILE* fp = fopen(dokument, "r");
    if (fp == NULL)
    {
        return -1;
    }
    int pozicija = fseek(fp, 0, SEEK_END);
    if (pozicija != 0)
    {
        return -1;
    }
    int duljina = ftell(fp);
    if (duljina == -1)
    {
        return -1;
    }
    fclose(fp);
    return duljina;
}

int main(void)
{
    char* dokument = "test.txt";
    if (findSize(dokument) != -1)
    {
        printf("Duljina %s dokumenta iznosi %d bajtova.", dokument, findSize(dokument));
    }
    else
    {
        printf("Doslo je do greske u radu s dokumentom.");
    }
    return 0;
}