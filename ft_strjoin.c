/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwen <mwen@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 18:15:53 by mwen              #+#    #+#             */
/*   Updated: 2021/05/20 22:20:39 by mwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		len;
	int		count;

	if (!s1 || !s2)
		return (NULL);
	count = 0;
	len = ft_strlen(s1) + ft_strlen(s2) - 1;
	p = (char *)malloc(len * sizeof(char));
	if (!p)
		return (NULL);
	while (*s1)
	{
		p[count] = *s1;
		count++;
		s1++;
	}
	while (*s2)
	{
		p[count] = *s2;
		count++;
		s2++;
	}
	p[count] = '\0';
	return (p);
}
