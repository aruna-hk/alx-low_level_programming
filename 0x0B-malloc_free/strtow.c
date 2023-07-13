#include <stdio.h>
#include <stlib.h>
/**
 * split string into wordss
* delimitor is the space ;;
*/
int space_delimitor(char *string)
{
	int space_del = 0;

	while(*string != '\0')//count space == count words
	{
		space_pos++;
		string++;
	}
	if (string != NULL)
		space_del++;
	return (space_del);
}
int word_len(char *string)
{
	static char *ptr_string = string;
	int count = 0
	while (*ptr_string != '\0')
	{
		if ( *string == ' ')
			break;
		count++;
		string++;
	}
	word_size = count + 1;
	if ( *ptr_string != '\0')
		ptr_string += wordsize;
	return (word_size);
}
	
char *split_string(char *string)
{
	int no_of_words;
	char *static ptr

	no_of_words = space_delimitor;
	char **str = malloc(sizeof(char) * (strlen(string) + no_of_words))
	for (int i = 0; i < no_of_words; i++)
	{
		str[i] = malloc(sizeof(char)*word_len(string));
	}
	while ( *string != '\0')
	{
		
