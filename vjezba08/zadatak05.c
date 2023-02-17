#include <stdio.h>
#include <string.h>

struct student
{
	char ime[20];
	char prezime[20];
	int jmbag;
	char grupa[20];
	int rezultat;

}studenti[5];

void funkcija(struct student studenti[])
{
	int brojac = 1;
	for (int i = 0; i < 5; i += 1)
	{
		printf("Unesite ime %d. studenta\n", brojac);
		scanf(" %s", &studenti[i].ime);
		printf("Unesite prezime %d. studenta:\n", brojac);
		scanf(" %s", &studenti[i].prezime);
		printf("Unesite jmbag %d. studenta:\n", brojac);
		scanf(" %d", &studenti[i].jmbag);
		printf("Unesite grupu %d. studenta:\n", brojac);
		scanf(" %s", &studenti[i].grupa);
		printf("Unesite rezultat %d. studenta:\n", brojac);
		scanf(" %d", &studenti[i].rezultat);
		brojac += 1;
	}

	for (int j = 0; j < 5; j += 1)
	{
		if (studenti[j].rezultat >= 40)
		{
			printf(" %s\n", studenti[j].ime);
		}
	}
}

int main(void)
{
	funkcija(studenti);
	return 0;
}
