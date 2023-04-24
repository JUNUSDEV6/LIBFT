/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:32:00 by yohanafi          #+#    #+#             */
/*   Updated: 2023/04/17 13:51:35 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	char			j;
	unsigned char	*dest;
	unsigned char	*sourc;

	i = 0;
	j = 1;
	dest = (unsigned char *)dst;
	sourc = (unsigned char *)src;
	if (!dest && !sourc)
		return (NULL);
	if (dest > sourc)
	{
		j = -1;
		dest += len - 1;
		sourc += len - 1;
	}
	while (i < len)
	{
		*dest = *sourc;
		dest += j;
		sourc += j;
		i++;
	}
	return (dst);
}
