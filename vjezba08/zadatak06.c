#include <stdio.h>
#include <string.h>

typedef struct
{
	int x;
	int y;
	int z;
	char crvena_rgb[20];

}rgb;

void pomoc(int niz_tocaka[], int a, char* zavrsna_crvena)
{
	int i;
	char mal[30];
	rgb boja;
	boja.x = niz_tocaka[0];
	boja.y = niz_tocaka[0];
	boja.z = niz_tocaka[0];
	for (i = 0; i < a; i += 1)
	{
		if (niz_tocaka[i] > 0 && niz_tocaka[i] < 256)
		{
			if (boja.x < niz_tocaka[i])
			{
				boja.x = niz_tocaka[i];
			}
			if (boja.y > niz_tocaka[i])
			{
				boja.y = niz_tocaka[i];
				boja.z = niz_tocaka[i];
			}
		}
	}
	sprintf(zavrsna_crvena, "(%d,%d,%d)", boja.x, boja.y, boja.z);

}

int main(void)
{
	char zavrsna_crvena[20];
	int niz_tocaka[10] = { 10,20,30,50,100,150,200,250,5 };
	int a = sizeof(niz_tocaka) / sizeof niz_tocaka[0];
	pomoc(niz_tocaka, a, &zavrsna_crvena);
	printf("%s", zavrsna_crvena);
	return 0;
}