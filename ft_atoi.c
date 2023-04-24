/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:40:45 by yohanafi          #+#    #+#             */
/*   Updated: 2023/04/23 15:29:49 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char		sign;
	long int	rlt;
	long int	tmp;

	sign = 1;
	rlt = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == 43)
	{
		if (*str == 45)
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		tmp = rlt;
		rlt = rlt * 10 + *str - 48;
		str++;
		if (rlt < tmp && sign == 1)
			return (-1);
		if (rlt < tmp && sign == -1)
			return (0);
	}
	return (rlt * sign);
}
