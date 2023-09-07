#include <stdio.h>
#include "str_func.h"
#include <assert.h>

const size_t n_rows = 3;

static void print_text3(const size_t n_rows, char** const text)
{
	for (size_t n_row = 0; n_row < n_rows; n_row++)
	{
		printf("%s", text[n_row]);
	}
}

int main()
{
	FILE* inputfile = fopen("input.txt", "r");
	assert(inputfile);

	char** lineptr = (char**) calloc(n_rows, sizeof(char*));
	size_t linesize;
	scanf("%zu", &linesize);
	my_getline(lineptr, &linesize, inputfile);
	print_text3(1, lineptr);
}