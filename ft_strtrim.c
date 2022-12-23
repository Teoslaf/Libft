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

static int ft_char(char c, const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	size_t i;
	size_t start;
	size_t end;

	start = 0;
	i = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_char(s1[start], set))
		start++;
	while (s1[end] && ft_char(s1[end], set))
		end--;
	str = (char *)malloc(sizeof(s1) * (end - start + 1));
	if (!str)
		return (NULL);
	while (start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

int main()
{
	// Test input string
	char const *s1 = "!,!<Hello, world!";
	char const *set = " ,!";
	char *trimmed = ft_strtrim(s1, set);
	printf("Trimmed string: %s\n", trimmed);
	return 0;
}