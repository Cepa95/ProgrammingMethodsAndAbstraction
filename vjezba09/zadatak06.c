
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int prvi, drugi, treci, cetvrti;

}niz;

int prosjek_datoteke(FILE* prosjek, int* pointer_pomoc)
{
	*pointer_pomoc = 0;
	niz nizovi[10];
	while ((fscanf(prosjek, "%d %d %d %d \n", &nizovi[*pointer_pomoc].prvi, &nizovi[*pointer_pomoc].drugi, &nizovi[*pointer_pomoc].treci, &nizovi[*pointer_pomoc].cetvrti)) != EOF)
	{
		*pointer_pomoc += 1;
	}
	int i, brojac = 0, j, a, pozicija;
	int temp = (nizovi[brojac].prvi + nizovi[brojac].drugi + nizovi[brojac].treci + nizovi[brojac].cetvrti);

	for (i = 0; i < *pointer_pomoc; i += 1)
	{
		for (j = 0; j < 4; j += 1)
		{
			a = (nizovi[brojac].prvi + nizovi[brojac].drugi + nizovi[brojac].treci + nizovi[brojac].cetvrti);
			if (a >= temp)
			{
				temp = a;
				pozicija = i;
			}
		}
		brojac += 1;
	}
	return pozicija + 1;
}

int main(void)
{
	int pointer_pomoc;
	FILE* prosjek;
	prosjek = fopen("test15.txt", "r");
	if (prosjek == NULL)
	{
		return	-1;
	}
	printf("U %d. redu datoteke se nalaze brojevi sa najvecom prosjecnom vrijednoscu.\n", prosjek_datoteke(prosjek, &pointer_pomoc));
	return 0;
}