/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaron- <mabaron-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:21:40 by mabaron-          #+#    #+#             */
/*   Updated: 2022/12/30 13:09:42 by mabaron-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (c == '\0')
		return ((char *)(s + i));
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}

int	ft_strlcpy(char *dst, const char *src, int dstsize)
{
	int	srcsize;
	int	i;

	srcsize = ft_strlen((char *)src);
	i = 0;
	if (dstsize != 0)
	{
		while (i < (dstsize - 1) && (src[i]))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (srcsize);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;

	if (s2 == NULL)
		return (0);
	if (s1 == NULL)
		return (ft_strjoin("", (char *)s2));
	nstr = malloc(sizeof(char) * (ft_strlen((char *)s1) \
	+ ft_strlen((char *)s2) + 1));
	if (nstr == NULL)
		return (0);
	ft_strlcpy(nstr, s1, ft_strlen((char *)s1) + 1);
	ft_strlcpy(nstr + ft_strlen((char *)s1), s2, ft_strlen((char *)s2) + 1);
	return (nstr);
}
