/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 14:47:59 by obelange          #+#    #+#             */
/*   Updated: 2016/09/30 14:47:59 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	if (n > 0)
	{
		while (s1[i] && s2[i] && i < (n - 1))
		{
			c1 = (unsigned char)s1[i];
			c2 = (unsigned char)s2[i];
			if (c1 > c2)
				return (c1 - c2);
			else if (c1 < c2)
				return (c1 - c2);
			i++;
		}
		c1 = (unsigned char)s1[i];
		c2 = (unsigned char)s2[i];
		if (c1 > c2)
			return (c1 - c2);
		else if (c1 < c2)
			return (c1 - c2);
	}
	return (0);
}
