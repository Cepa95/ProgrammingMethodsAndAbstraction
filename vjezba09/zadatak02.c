#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char* create_str(FILE* datoteka)
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
		if (islower(ch))
		{
			str[brojac++] = ch;
		}
	}
	str[brojac] = '\0';
	return str;
}

int main(void)
{
	FILE* datoteka = fopen("test.txt", "r");

	if (datoteka == NULL)
	{
		return	-1;
	}
	else
	{
		char* ptr = create_str(datoteka);
		puts(ptr);
		fclose(datoteka);
		free(ptr);
	}
	return 0;
}