/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 09:43:04 by obelange          #+#    #+#             */
/*   Updated: 2016/10/27 09:43:07 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"
#include "unistd.h"

int	main(void)
{
	t_hash	*hash;
	t_node	*node;
	char	*line;
	char	*key;
	char	*value;
	char	*ret;

	node = NULL;
	hash = t_hash_build(200000);
	// hash = t_hash_build(100);

	int phase = 0;


	while (get_next_line(0, &line))
	{
		if (line && !(*line))
		{
			phase++;
			ft_strdel(&line);
		}
		else if (phase == 1)
		{
			ret = t_hash_get(hash, line);
			if (ret)				
				printf("%s\n", ret);
			else
				printf("%s: Not found.\n", line);
			ft_strdel(&line);
		}
		else if (phase == 0)
		{
			key = ft_strdup(line);
			ft_strdel(&line);
			get_next_line(0, &line);
			value = ft_strdup(line);
			ft_strdel(&line);
			t_hash_add(hash, key, value);
		}		
	}

	// t_hash_print(hash, hash->size);
	// t_node_print_chain(hash->map[t_hash_hashing((unsigned char*)key, hash->size)]);
}