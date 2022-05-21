/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 10:57:49 by amenesca          #+#    #+#             */
/*   Updated: 2022/05/21 15:36:41 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	int		*ptr;
	size_t	total;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	total = count * size;
	if (total / count != size)
		return (NULL);
	ptr = malloc(total);
	i = 0;
	while (i < total)
	{
		*(ptr + i) = 0;
		i++;
	}
	return (ptr);
}
