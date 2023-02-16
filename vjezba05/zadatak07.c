#include <stdio.h>

void pomoc_sve(int n, int k)
{
	int i, j = 0, broji = 0;

	for (i = 0; i <= k; i += 1)
	{
		j += 1;
		if (n & (1 << i))
		{
			printf("%d ", j);
			broji += 1;
		}
	}
	if (broji == 0)
	{
		printf("nema takve vjezbe");
	}
}


void pomoc_nista(int n, int k)
{
	int i, j = 0, broji = 0;

	for (i = 0; i < k; i += 1)
	{
		j += 1;
		if (n & (1 << i))
		{
			continue;
		}
		else
		{
			printf("%d ", j);

		}
	}
}


int main(void)

{
	int k, broj_vjezbi, broj_studenata, provjera, i, brojac, broj_polozenih_vjezbi, j, polozena_vjezba, zbroj_vjezbi, sve_rjeseno, nista_rjeseno, zbroj1_vjezbi;

	printf("Unesite broj vjezbi nekog predmeta:\n");
	scanf("%d", &k);

	broj_vjezbi = (1 << k) - 1;
	sve_rjeseno = broj_vjezbi;
	zbroj_vjezbi = (1 << k) - 1;
	zbroj1_vjezbi = 0;
	nista_rjeseno = zbroj1_vjezbi;


	printf("Unesite broj studenata:\n");
	scanf("%d", &broj_studenata);
	brojac = 0;
	for (i = 1; i <= broj_studenata; i += 1)
	{
		printf("Unesite broj polozenih vjezbi %d. studenta:\n", i);
		scanf("%d", &broj_polozenih_vjezbi);
		provjera = (1 << broj_polozenih_vjezbi) - 1;
		if (broj_vjezbi == provjera)
		{
			brojac += 1;
			continue;
		}
		sve_rjeseno &= zbroj_vjezbi;
		nista_rjeseno |= zbroj1_vjezbi;

		zbroj_vjezbi = 0;
		zbroj1_vjezbi = 0;
		for (j = 1; j <= broj_polozenih_vjezbi; j += 1)
		{
			printf("Unesite broj polozene vjezbe:\n");
			scanf("%d", &polozena_vjezba);
			zbroj_vjezbi += 1 << (polozena_vjezba - 1);
			zbroj1_vjezbi += 1 << (polozena_vjezba - 1);


		}
	}
	sve_rjeseno &= zbroj_vjezbi;
	nista_rjeseno |= zbroj_vjezbi;
	printf("Broj studenata koji su rijesili sve vjezbe: %d\n", brojac);
	printf("Broj vjezbe koje su rijesili svi studenti:");
	pomoc_sve(sve_rjeseno, k);
	printf("\nBroj vjezbe koje nije rijesio nijedan student:");

	if (brojac == 0)
	{
		pomoc_nista(nista_rjeseno, k);

	}
	else
	{
		printf("nema takve vjezbe");

	}
	return 0;
}