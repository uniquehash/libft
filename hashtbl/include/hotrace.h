/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 09:43:04 by obelange          #+#    #+#             */
/*   Updated: 2016/10/27 09:43:07 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOTRACE_H
# define HOTRACE_H
# define BUFF_SIZE 1024
# define NULLGUARD(INPUT) if ((INPUT) == NULL) return (-1)
# define NULL_GUARD(INPUT) if ((INPUT) == NULL) return (NULL)
# define FGUARD(INPUT) if ((INPUT) == -1) return (-1)
# define FILEGUARD(INPUT) if ((INPUT) == -1) return (-1)
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef	struct 	s_node
{
	struct s_node *nxt;
	char	*key;
	char	*value;
}				t_node;

typedef	struct 	s_hash
{
	t_node	**map;
	int		size;
}				t_hash;

typedef struct	s_line_elem
{
	char				*re[5005];
	int					fd;
	int					st[5005];
	int					s[5005];
	int					flag[5005];
	size_t				index;
	char const			*delim;
	struct s_line_elem	*nxt;
	struct s_line_elem	*prev;
}				t_line_elem;



void	helper_error(char *message);

int		ft_strlen(char *str);
void	ft_bzero(void *s, size_t n);
void	ft_strdel(char **as);
char	*ft_strdup(char *s1);
char	*ft_strnew(size_t size);

// gnl
int	get_next_line(const int fd, char **line);
char	*ft_strchr(char *s, int c);
int		ft_stric(char *s, char *c, size_t *index);
char	*ft_strmcat(char *s1, char *s2);
char	*ft_strsub(char *s, unsigned int start, size_t len);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strncat(char *s1, char *s2, size_t n);
char	*ft_strncpy(char *dst, char *src, size_t len);

int		sse_strcmp(const char *s1, const char *s2);


t_hash	*t_hash_build(int bucket_size);
unsigned long	t_hash_hashing(unsigned char *key, int bucket_size);
void	t_hash_del(t_hash **hash, int bucket_size);
void	t_hash_print(t_hash *hash, int bucket_size);
int		t_hash_add(t_hash *hash, char *key, char *value);
char	*t_hash_get(t_hash *hash, char *key);
int		t_hash_update(t_hash *hash, char *key, char *value);


void	t_node_print_chain(t_node *node);
void	t_node_print(t_node *node);
void	t_node_del(t_node **node);
t_node	*t_node_build(char *key, char *value);


# include											<stdio.h>
#endif





