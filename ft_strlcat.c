/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwen <mwen@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:26:29 by mwen              #+#    #+#             */
/*   Updated: 2021/05/15 23:11:36 by mwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;

	if (ft_strlen(dst) + 1 > dstsize)
	{
		i = ft_strlen(src) + dstsize;
		return (i);
	}
	i = ft_strlen(dst) + ft_strlen(src);
	while (*dst)
	{
		dst++;
		dstsize--;
	}
	while (dstsize > 1)
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	*dst = '\0';
	return (i);
}
