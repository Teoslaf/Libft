/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:18:07 by ttaneski          #+#    #+#             */
/*   Updated: 2022/12/08 15:03:23 by ttaneski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;

	ret = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			ret = (char *)s;
		s++;
	}
	if (!c)
		ret = ((char *)s);
	return (ret);
}

/* int main()
{
	const char str[] = "123645567389";
	const char ch = '\0';
	char *ret;

	ret = ft_strrchr(str, ch);

	printf("%p\n", ret);
	printf("%p\n", strrchr(str, ch));

	return (0);
} */
