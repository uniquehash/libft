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

void	helper_error(char *message)
{
	write(1, message, ft_strlen(message));
	exit(1);
}

int		ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
		((char*)s)[i++] = 0;
}

void	ft_strdel(char **as)
{
	if (as)
	{
		if (*as)
		{
			free(*as);
			*as = 0;
		}
	}
}

char	*ft_strdup(char *s1)
{
	size_t	i;
	char	*nstr;
	int		x;

	i = ft_strlen(s1);
	NULL_GUARD(nstr = ft_strnew(i));
	x = 0;
	while (s1[x])
	{
		nstr[x] = s1[x];
		x++;
	}
	return (nstr);
}
