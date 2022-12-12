/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:37:29 by ttaneski          #+#    #+#             */
/*   Updated: 2022/12/08 15:58:42 by ttaneski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nmbeb, size_t size)
{
	void	*rtn;

	rtn = malloc(size * nmbeb);
	if (!rtn)
		return (NULL);
	ft_bzero(rtn, nmbeb);
	return (rtn);
}
