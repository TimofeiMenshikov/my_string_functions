#include <stdio.h>
#include <malloc.h>
#include <assert.h>


char my_puts(const char* const str)
{
	size_t printed_number = 0;

	while (putchar(str[printed_number]) != '\0')
	{
		printed_number++;
	} 

	if (printed_number == 0)
	{
		return EOF;
	}

	return '\n';
}


char* my_strch(char* const str, const int ch)
{
	size_t char_number = 1;

	while (str[char_number] != '\0')
	{
		if ((int) str[char_number] == ch)
		{
			return str + char_number;
		}
		char_number++;
	}

	return NULL;
}


size_t my_strlen(const char* const str)
{
	size_t char_number = 0;
	while(str[char_number] != '\0')
	{
		char_number++;
	}
	return char_number;
}


char* my_strcpy(char*  dest, const char*  source)
{
	size_t char_number = 0;
	while (source[char_number] != '\0')
	{
		dest[char_number] = source[char_number];
		char_number++;
	}
	dest[char_number] = '\0';
	return dest;
}


char* my_strncpy(char* dest, const char* source, size_t cp_number)
{
	size_t char_number = 0;
	for (char_number = 0; (char_number < cp_number) && (source[char_number] != '\0'); char_number++)
	{
		dest[char_number] = source[char_number];
	}
	while (char_number < cp_number)
	{
		dest[char_number] = '\0';
		char_number++;
	}
	return dest;
}


char* my_strcat(char* dest, const char* append)
{
	size_t dest_char_number = 0;
	while (dest[dest_char_number] != '\0')
	{

		dest_char_number++;
	}
	size_t app_char_number = 0;

	while (append[app_char_number] != '\0')
	{

		dest[dest_char_number] = append[app_char_number];
		app_char_number++;
		dest_char_number++;
	}
	dest[dest_char_number] = '\0';
	return dest;
}


char* my_strncat(char* dest, const char* append, size_t add_number)
{
	size_t dest_char_number = 0;
	while (dest[dest_char_number] != '\0')
	{
		dest_char_number++;
	}
	size_t app_char_number = 0;

	while (append[app_char_number] != '\0' && app_char_number < add_number)
	{
		dest[dest_char_number] = append[app_char_number];
		app_char_number++;
		dest_char_number++;
	}
	dest[dest_char_number] = '\0';
	return dest;
}


char* my_fgets(char* str, int number_of_chars, FILE* stream)
{
	size_t char_number = 0;
	char symbol = '\0';
	while (char_number < (number_of_chars - 1) && ((symbol = fgetc(stream)) != EOF) && (symbol != '\n')) 
	{
		str[char_number] = symbol;
		char_number++;
	}
	str[char_number] = '\0';

	return str;
}


void string_research(const char* const string)
{
	for (size_t string_number = 0; string[string_number] != '\0'; string_number++)
	{
		printf("%c(%d)", string[string_number], string[string_number]);
	}
	printf("%c(%d)", '\0', '\0');
	printf("\n");
}


char* my_strdup(const char* str)
{
	size_t str_len = my_strlen(str);
	char* new_str = (char*) calloc(str_len, sizeof(char));
	assert(new_str); 
	my_strcpy(new_str, str);
	return new_str;
}

