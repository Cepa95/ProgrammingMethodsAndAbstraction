#include <stdio.h>
#define volumen_direktiva (a*b*c)
#define oplosje_direktiva (2*(a*b+b*c+a*c))

void count(int a, int b, int c)
{
	int volumen = volumen_direktiva;
	printf("Volumen iznosi: %d\n", volumen);
	int oplosje = oplosje_direktiva;
	printf("Oplosje iznosi: %d", oplosje);
}

struct Square
{
	int prva_stranica;
	int druga_stranica;
	int treca_stranica;
};

int main(void)
{
	struct Square kvadar;
	kvadar.prva_stranica = 10;
	kvadar.druga_stranica = 5;
	kvadar.treca_stranica = 7;
	count(kvadar.prva_stranica, kvadar.druga_stranica, kvadar.treca_stranica);
	return 0;
}