/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:42:26 by hel-kame          #+#    #+#             */
/*   Updated: 2022/12/02 14:42:28 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int		ft_strlen(char *s);
int		ft_strlen_nl(char *s);
int		ft_get_nl(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*read_file(char *buffer, int fd);
char	*get_new_buffer(char *buffer);
char	*get_line(char *buffer);
char	*get_next_line(int fd);

#endif
