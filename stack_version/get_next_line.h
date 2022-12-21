/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:32:24 by tbelleng          #+#    #+#             */
/*   Updated: 2022/12/01 17:50:53 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
//# include <string.h>

int		ft_strlen(char *s);
int		ft_strlen_nl(char *s);
int		ft_get_nl(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*read_file(char *buffer, int fd);
char	*get_new_buffer(char *buffer);
char	*get_line(char *buffer, char *line);
char	*get_next_line(int fd);
char	*ft_strdup(char *s);
#endif
