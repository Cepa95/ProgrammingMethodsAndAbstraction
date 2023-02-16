#include <stdio.h>

void binarni_zapis(int n)
{
	if (n > 1)
	{

		binarni_zapis(n >> 1);
	}

	printf("%d", n & 1);
}


int setiraj(int broj, int redni_byte)
{
	int novibroj = 0;
	novibroj = broj | (((1 << 8) - 1) << (redni_byte * 8));

	return novibroj;
}

int main(void)
{
	int broj = 200, redni_byte = 1, a;
	a = setiraj(broj, redni_byte);
	binarni_zapis(a);
	printf(" je binarni broj, koji u dekadskom sustavu pisemo kao broj ");
	printf("%d.\n", a);
	return 0;
}