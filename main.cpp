#include <stdio.h>
#include "str_func.h"


int main()
{
	char str[] = "hello world";
	FILE* inputfile = fopen("input.txt", "r");

	ssize_t scanned_number = my_getline(str, 10, '\n');


	printf("%s", str);
}