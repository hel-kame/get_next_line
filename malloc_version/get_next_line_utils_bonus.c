/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:47:25 by hel-kame          #+#    #+#             */
/*   Updated: 2022/12/02 15:23:12 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_strlen_nl(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\n' && s[i] != '\0')
		i++;
	if (s[i] == '\n')
		i++;
	return (i);
}

int	ft_get_nl(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		return (1);
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		y;
	char	*s;

	i = 0;
	y = -1;
	if (!s1 && !s2)
		return (NULL);
	s = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!s)
		return (NULL);
	if (s2)
	{
		while (s2[i] != '\0')
		{
			s[i] = s2[i];
			i++;
		}
	}
	while (s1[++y] != '\0')
		s[i + y] = s1[y];
	if (s2)
		free(s2);
	s[i + y] = '\0';
	return (s);
}
