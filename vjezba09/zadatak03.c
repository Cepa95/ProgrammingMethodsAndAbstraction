#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void create_string(FILE* datoteka, FILE* datoteka_write)
{
	int brojac = 0;
	char ch;
	fseek(datoteka, 0, SEEK_END);
	int pozicija = ftell(datoteka);
	fseek(datoteka, 0, SEEK_SET);
	char* str = (char*)malloc((pozicija) * sizeof(char));
	if (str == NULL)
	{
		printf("Doslo je do greske.\n");
		return NULL;
	}
	while (ch = fgetc(datoteka)) {
		if (ch == EOF)
		{
			break;
		}
		if (ispunct(ch) || ch == ' ' || ch == 10)
		{
			continue;
		}
		else
		{
			str[brojac++] = ch;
		}
	}
	str[brojac] = '\0';
	int counter = 0;
	while (str[counter] != '\0')
	{
		fputc(str[counter++], datoteka_write);

	}
	fputc(str, datoteka_write);
	free(str);
}

int main(void)
{
	FILE* datoteka = fopen("test10.txt", "r");
	FILE* datoteka_write = fopen("test11.txt", "w");

	if (datoteka == NULL || datoteka_write == NULL)
	{
		return	-1;

	}
	else
	{
		create_string(datoteka, datoteka_write);
		fclose(datoteka);
		fclose(datoteka_write);
	}
	return 0;
}