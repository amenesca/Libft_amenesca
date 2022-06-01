/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:12:59 by amenesca          #+#    #+#             */
/*   Updated: 2022/05/25 14:55:43 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*str;

	j = start;
	if (!s)
		return (NULL);
	if (j > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - j >= len)
		str = (char *) malloc((len + 1));
	else
		str = (char *) malloc(ft_strlen(s) - j + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s[j], len + 1);
	return (str);
}
