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

char	*ft_strchr(char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char*)s);
		s++;
	}
	if (*s == c)
		return ((char*)s);
	else
		return (NULL);
}

int		ft_stric(char *s, char *c, size_t *index)
{
	size_t	i;
	size_t	j;

	if (s && c)
	{
		i = 0;
		while (s[i])
		{
			j = -1;
			while (c[++j])
				if (s[i] == c[j])
				{
					*index = i;
					return (1);
				}
			i++;
		}
		return (0);
	}
	return (-1);
}

char	*ft_strmcat(char *s1, char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*nstr;
	size_t	i;

	if (s1)
		s1_len = ft_strlen(s1);
	else
		s1_len = 0;
	if (s2)
		s2_len = ft_strlen(s2);
	else
		s2_len = 0;
	nstr = ft_strnew((s1_len + s2_len + 1));
	ft_strncpy(nstr, s1, s1_len);
	ft_strcat(nstr, s2);
	return (nstr);
}

char	*ft_strsub(char *s, unsigned int start, size_t len)
{
	char	*nstr;

	if (s)
	{
		NULL_GUARD(nstr = ft_strnew(len));
		ft_strncat(nstr, s + start, len);
		return (nstr);
	}
	return (NULL);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (s1[j])
		j++;
	while (s2[++i])
	{
		if (s2[i])
			s1[j++] = s2[i];
	}
	s1[j] = '\0';
	return (s1);
}
