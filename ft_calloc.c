/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:21:24 by yohanafi          #+#    #+#             */
/*   Updated: 2023/04/17 11:47:23 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*array;
	size_t	leng;

	leng = num * size;
	array = (void *)malloc(leng);
	if (!array)
		return (NULL);
	ft_bzero(array, leng);
	return (array);
}
