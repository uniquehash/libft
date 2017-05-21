/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace_helper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 09:43:04 by obelange          #+#    #+#             */
/*   Updated: 2016/10/27 09:43:07 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

char	*ft_strncat(char *s1, char *s2, size_t n)
{
	size_t	end;
	size_t	i;

	i = 0;
	end = ft_strlen(s1);
	while (s2[i] && i < n)
	{
		s1[end + i] = s2[i];
		if (s2[i] == 0)
			s2--;
		i++;
	}
	s1[end + i] = 0;
	return (s1);
}

char	*ft_strncpy(char *dst, char *src, size_t len)
{
	size_t i;

	i = 0;
	if (dst && src)
	{
		while (src[i] && i < len)
		{
			dst[i] = src[i];
			i++;
		}
		while (i < len)
		{
			dst[i] = '\0';
			i++;
		}
	}
	return (dst);
}
