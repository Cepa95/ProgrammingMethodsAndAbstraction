#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int kolicina;
	char tier[10];
}animal;

void ispis(FILE* zivotinje, int* pointer_pomoc)
{
	*pointer_pomoc = 0;
	animal animal1[5];
	while ((fscanf(zivotinje, "%d %s\n", &animal1[*pointer_pomoc].kolicina, animal1[*pointer_pomoc].tier)) != EOF)
	{
		*pointer_pomoc += 1;
	}

	int i, brojac = 0, j;
	for (i = 0; i < *pointer_pomoc; i += 1)
	{
		for (j = 0; j < animal1[brojac].kolicina; j += 1)
		{
			printf("%s", animal1[brojac].tier);
		}
		brojac += 1;
		printf("\n");
	}
}

int main(void)
{
	int pointer_pomoc;
	FILE* zivotinje;
	zivotinje = fopen("test5.txt", "r");
	if (zivotinje == NULL)
	{
		return	-1;
	}
	ispis(zivotinje, &pointer_pomoc);

	return 0;
}