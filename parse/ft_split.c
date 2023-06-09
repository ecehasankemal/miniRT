/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 20:32:30 by hece              #+#    #+#             */
/*   Updated: 2023/05/26 20:32:31 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "parse.h"

size_t
	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	if (size > 0)
	{
		while (index < (size - 1) && src[index] != '\0')
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	while (src[index] != '\0')
	{
		index++;
	}
	return (index);
}

char
	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	length;

	if (s == NULL)
		return (NULL);
	length = ft_strlen((char *)s);
	if (start > length)
		return (ft_strdup(""));
	if (length - start >= len)
		result = (char *)malloc((len + 1) * sizeof(char));
	else
		result = (char *)malloc((length - start + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, (char *)&s[start], (len + 1));
	return (result);
}

size_t
	word_count(const char *s, char c)
{
	int	index;
	int	count;
	int	trigger;

	index = 0;
	count = 0;
	trigger = 0;
	while (s[index] != '\0')
	{
		if (s[index] != c && trigger == 0)
		{
				trigger = 1;
				count++;
		}
		else if (s[index] == c)
				trigger = 0;
		index++;
	}
	return (count);
}

char
	*ft_strcreate(const char *s, char c, size_t counter)
{
	size_t	len;
	size_t	tmp;

	len = 0;
	tmp = counter;
	while (s[tmp] != c && s[tmp] != '\0')
	{
		tmp++;
		len++;
	}	
	return (ft_substr(s, counter, len));
}

char
	**ft_split(char const *s, char c)
{
	size_t	counter;
	size_t	iter;
	char	**res;

	if (!s)
		return (NULL);
	res = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	counter = 0;
	iter = 0;
	while (s[counter] != '\0')
	{
		while (s[counter] == c && s[counter] != '\0')
			counter++;
		if (s[counter] != '\0')
		{
			res[iter] = ft_strcreate(s, c, counter);
			iter++;
		}
		while (s[counter] != c && s[counter] != '\0')
			counter++;
	}
	res[iter] = 0;
	return (res);
}
