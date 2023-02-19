#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	float ax, ay, bx, by, cx, cy;

}triangle;


triangle* proces(FILE* fp, int* pointer_pomoc)
{
	*pointer_pomoc = 0;
	triangle triangle1[10];

	while ((fscanf(fp, "(%f, %f), (%f, %f), (%f, %f) \n", &triangle1[*pointer_pomoc].ax, &triangle1[*pointer_pomoc].ay, &triangle1[*pointer_pomoc].bx, &triangle1[*pointer_pomoc].by, &triangle1[*pointer_pomoc].cx, &triangle1[*pointer_pomoc].cy) != EOF))
	{
		*pointer_pomoc += 1;
	}
	return triangle1;
}

void binary(triangle* triangle1, int* pointer_pomoc)
{
	FILE* binarno;
	binarno = fopen("point.bin", "wb");
	if (binarno == NULL)
	{
		printf("Doslo je do greske. Provjeri kod.\n");
	}
	for (int i = 0; i < *pointer_pomoc; i++) {
		fwrite(&triangle1[i], sizeof(triangle1), 1, binarno);
	}
	fclose(binarno);
}


int main(void)
{
	int pointer_pomoc;
	triangle* pomoc;
	FILE* datoteka = fopen("test2.txt", "r");
	if (datoteka == NULL)
	{
		return	-1;
	}
	pomoc = proces(datoteka, &pointer_pomoc);
	binary(pomoc, &pointer_pomoc);
	fclose(datoteka);
	return 0;
}