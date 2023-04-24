/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:28:19 by yohanafi          #+#    #+#             */
/*   Updated: 2023/04/23 18:41:06 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkchr(char const *str, char const c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_checkchr(set, *s1))
		s1++;
	size = ft_strlen(s1);
	while (size != 0 && ft_checkchr(set, s1[size - 1]))
		size--;
	dst = (char *)malloc(sizeof(char) * (size + 1));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, (char *)s1, size + 1);
	return (dst);
}
