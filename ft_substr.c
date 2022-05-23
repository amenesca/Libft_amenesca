/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:12:59 by amenesca          #+#    #+#             */
/*   Updated: 2022/05/23 11:06:55 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = start;
	if (ft_strlen(s) == 0)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start >= len)
		str = (char *) malloc((len + 1));
	else
		str = (char *) malloc(ft_strlen(s) - start + 1);
	if (!str)
		return (NULL);
	while (i < len && j < ft_strlen(s))
	{
		str[i] = s[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
