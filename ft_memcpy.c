/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:58:08 by ttaneski          #+#    #+#             */
/*   Updated: 2022/12/08 12:32:14 by ttaneski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	const char	*p1;
	char		*p2;

	p1 = (const char *)src;
	p2 = (char *)dest;
	while (len--)
		*p2++ = *p1++;
	return (dest);
}

/* int main()
{
	char str[50] = "123456";
	char str1[50] = "asdfgh";
	printf("Before memset():%s : %s\n", str, str1);
	ft_memcpy(str, str1, 5);
	printf("After memset(): %s : %s\n", str, str1);
	return 0;
} */