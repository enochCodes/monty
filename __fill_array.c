#include "monty.h"

/**
 * fill_array - Filles and array wit splitted words.
 *@arr: An array.
 *@placeholder: The string to be splitted.
 *@wc: WordCount.
 *
 *Return: The filled array.
 */


char **fill_array(char **arr, char *placeholder, int wc)
{
	int i = 0;

	while (wc--)
	{
		arr[i] = tokenizer(&placeholder);
		i++;
	}
	arr[i] = (NULL);
	return (arr);
}
