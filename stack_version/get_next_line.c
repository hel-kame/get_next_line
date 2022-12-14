/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:01:37 by hel-kame          #+#    #+#             */
/*   Updated: 2022/12/21 14:56:47 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(char *buffer, int fd)
{
	char	tmp[BUFFER_SIZE + 1];
	char	*str;
	int		to_read;

	if (buffer[0])
	{
		str = ft_strdup(buffer);
		if (!str)
			return (NULL);
	}
	else
		str = NULL;
	while (!str || !ft_get_nl(str))
	{
		to_read = read(fd, tmp, BUFFER_SIZE);
		if (to_read < 0)
		{
			free(str);
			return (NULL);
		}
		if (!to_read)
			break;
		tmp[to_read] = '\0';
		str = ft_strjoin(tmp, str);
	}
	return (str);
}

char	*get_line(char *buffer, char *line)
{
	int		i;
	char	*s;
	int		j;

	i = 0;
	if (!line || line[i] == '\0')
		return (NULL);
	s = malloc(sizeof(char) * (ft_strlen(line)) + 1);
	if (!s)
		return (NULL);
	while (line[i] != '\0' && line[i] != '\n')
	{
		s[i] = line[i];
		i++;
	}
	if (line[i] == '\n')
	{
		s[i] = '\n';
		i++;
	}
	s[i] = '\0';
	j = 0;
	while (line[i])
		buffer[j++] = line[i++];
	buffer[j] = 0;
	free(line);
	return (s);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE];
	char		*s;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	s = read_file(buffer, fd);
	if (!s)
		return (NULL);
	s = get_line(buffer, s);
	return (s);
}
