#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char ime[50];
	char prezime[50];
	int godina;

}ucenik;

void unesi_niz(FILE* ucenici1, ucenik* ucenici, int* pointer_pomoc)
{
	*pointer_pomoc = 0;
	while ((fscanf(ucenici1, "%s %s %d\n", &ucenici[*pointer_pomoc].ime, &ucenici[*pointer_pomoc].prezime, &ucenici[*pointer_pomoc].godina)) != EOF)
	{
		*pointer_pomoc += 1;
	}
}

void ispis_niza(ucenik* ucenici, int* pointer_pomoc)
{
	printf("Ispis niza iz datoteke:\n");
	for (int i = 0; i < *pointer_pomoc; i += 1)
	{
		printf("%s %s %d\n", ucenici[i].ime, ucenici[i].prezime, ucenici[i].godina);
	}
	printf("\n");
}

int compare(void* a, void* b)
{
	ucenik* prvo = a;
	ucenik* drugo = b;
	return (prvo->godina - drugo->godina);
}

void sortiraj_niz_ulazno(ucenik* ucenici, int* pointer_pomoc)
{

	printf("Sortirano po godinama ulazno:\n");
	qsort(ucenici, *pointer_pomoc, sizeof(ucenik), compare);
	for (int i = 0; i < *pointer_pomoc; i += 1)
	{
		printf("%s %s %d\n", ucenici[i].ime, ucenici[i].prezime, ucenici[i].godina);
	}
	printf("\n");
}

int compare1(void* a, void* b)
{
	ucenik* prvo = a;
	ucenik* drugo = b;

	return (drugo->godina - prvo->godina);
}


void sortiraj_niz_silazno(ucenik* ucenici, int* pointer_pomoc)
{
	{

		printf("Sortirano po godinama silazno:\n");
		qsort(ucenici, *pointer_pomoc, sizeof(ucenik), compare1);
		for (int i = 0; i < *pointer_pomoc; i += 1)
		{
			printf("%s %s %d\n", ucenici[i].ime, ucenici[i].prezime, ucenici[i].godina);
		}
	}
}


int main(void)
{
	ucenik ucenici[10];
	int* pointer_pomoc;
	FILE* ucenici1;
	ucenici1 = fopen("test.txt", "r");
	if (ucenici1 == NULL)
	{
		return	-1;
	}
	unesi_niz(ucenici1, ucenici, &pointer_pomoc);
	ispis_niza(ucenici, &pointer_pomoc);
	sortiraj_niz_ulazno(ucenici, &pointer_pomoc);
	sortiraj_niz_silazno(ucenici, &pointer_pomoc);
	return 0;
}