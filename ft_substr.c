/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:40:05 by yohanafi          #+#    #+#             */
/*   Updated: 2023/04/22 16:13:41 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	size;
	char	*find;

	size = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (len_s > start)
		size = len_s - start;
	if (size > len)
		size = len;
	if (start > len_s)
		start = len_s;
	find = (char *)malloc(sizeof(char) *(size + 1));
	if (!find)
		return (NULL);
	ft_strlcpy(find, (char *)s + start, size + 1);
	return (find);
}
