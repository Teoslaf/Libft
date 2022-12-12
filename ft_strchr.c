/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:45:01 by ttaneski          #+#    #+#             */
/*   Updated: 2022/12/06 15:20:08 by ttaneski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] != c)
		return (NULL);
	else
		return ((char *)s + i);
}

/* int main()
{
	const char str[] = "123645567389";
	const char ch = '\0';
	char *ret;

	ret = ft_strchr(str, ch);

	printf("%p\n", ret);
	printf("%p\n", strchr(str, ch));

	return (0);
}
 */