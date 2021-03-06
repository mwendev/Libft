/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwen <mwen@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:40:08 by mwen              #+#    #+#             */
/*   Updated: 2021/05/20 22:33:40 by mwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	size_t	i;
	size_t	nb;
	int		neg;

	i = 0;
	nb = 0;
	neg = 1;
	while ((s[i] == '\n' || s[i] == '\t' || s[i] == ' ')
		|| s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
		i++;
	if (s[i] == '-')
		neg = -1;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		nb = nb * 10 + (s[i] - '0');
		i++;
	}
	return (nb * neg);
}
