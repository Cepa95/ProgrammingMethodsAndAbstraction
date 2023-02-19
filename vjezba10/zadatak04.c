#include <stdio.h>
#include <string.h>

int trazi_ch(char* string, char ch, int indeks)
{
    if (*(string + indeks) == ch)
    {
        return indeks + 1;
    }
    if (*(string + indeks) == '\0')
    {
        return -1;
    }
    return trazi_ch(string, ch, indeks + 1);
}

int main(void)
{
    int indeks = 0;
    char string[] = "qwertzuiopasdfghjklyxcvbnmn123456789";
    char ch = 't';
    int provjera = trazi_ch(string, ch, indeks);
    if (provjera != -1)
    {
        printf("Znak %c se nalazi na %d. mjestu.", ch, provjera);
    }
    else
    {
        printf("Znak %c se ne nalazi u %s.", ch, string);
    }
    return 0;
}
