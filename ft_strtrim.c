/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:36:47 by ttaneski          #+#    #+#             */
/*   Updated: 2022/12/08 12:23:11 by ttaneski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	start = 0;
	end = ft_strlen(s1);
	len = end - start;
	str = malloc(len + 1);
	while (start < end && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	if (!str)
		return (NULL);
	ft_memcpy(str, s1 + start, len);
	str[len] = '\0';
	return (str);
}

/* int main(int argc, char **argv)
{
	// Test input string
	char const *s1 = "Hello, world!";

	// Test set of characters to trim
	char const *set = " ,!";

	// Trim the input string and print the result
	char *trimmed = ft_strtrim(s1, set);
	printf("Trimmed string: %s\n", trimmed);

	return 0;
} */