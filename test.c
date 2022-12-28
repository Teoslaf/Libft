
#include "libft.h"

/*
	c_words - Count the number of substrings in a string
	return: The number of substrings in the input string
*/

static int c_words(char *str, char c)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (*str)
	{
		if (j == 0 && *str != c)
		{
			i++;
			j = 1;
		}
		else if (*str == c)
			j = 0;
		str++;
	}
	return (i);
}

/*
	ft_word - Create a new substring from a string
	return: Pointer to the new substring
*/
char *ft_word(const char *str, int start, int end)
{
	char *word;

	word = malloc((end - start + 1) * sizeof(char));
	ft_memcpy(word, str + start, str - end);
	word[end - start] = '\0';
	return (word);
}
/*
	ft_split - Split a string into an array of substrings
	return: Pointer to the array of substrings
*/

char **ft_split(char const *s, char c)
{
	size_t i;
	size_t j;
	int index;
	char **split;

	i = 0;
	j = 0;
	index = -1;
	if (!s || !(split = malloc((c_words(s, c) + 1) * (sizeof(char *)))))
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		i++;
	}
}

int main(void)
{
	char str[] = "this is a test";
	printf("%d", c_words(str, ' '));
}
