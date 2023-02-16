#include <stdio.h>
#include <string.h>

void datum_rodenja(char datum[])
{
	char tocka[10], tocka1[10];
	int dan, mjesec, godina, a;
	sscanf(datum, "%d %s %d %s %d", &dan, tocka, &mjesec, tocka1, &godina);
	printf("osoba rodena na dan %d. mjeseca %d. i godine %d.\n", dan, mjesec, godina);
	a = 2022 - godina;
	printf("slavit ce broj rodendana:%d", a);
}

int main(void)
{
	char datum[15] = "15. 03. 1970";
	datum_rodenja(datum);
	return 0;
}