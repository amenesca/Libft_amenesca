/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 08:20:41 by amenesca          #+#    #+#             */
/*   Updated: 2022/05/21 15:04:41 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	char	*str;
	size_t	i;

	str = (char *) s;
	i = 0;
	temp = NULL;
	while (i <= ft_strlen(str))
	{
		if (str[i] == (char) c)
			temp = str + i;
		i++;
		if (str[i] == (char) c)
			temp = str + i;
	}
	return (temp);
}
