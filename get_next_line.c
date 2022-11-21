/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarges <afarges@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:30:56 by afarges           #+#    #+#             */
/*   Updated: 2022/10/11 15:30:56 by afarges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*delete_current_line(char *buf)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	while (buf[i] != '\0' && buf[i] != '\n')
		i++;
	if (buf[i] == '\0')
	{
		free(buf);
		return (0);
	}
	res = ft_calloc((ft_strlen(buf) - i + 1), sizeof(char));
	i += 1;
	j = 0;
	while (buf[j] != '\0')
		res[j++] = buf[i++];
	free(buf);
	return (res);
}

static char	*get_current_line(char *buf)
{
	char	*res;
	int		i;

	i = 0;
	if (buf[i] == '\0')
		return (0);
	while (buf[i] != '\0' && buf[i] != '\n')
		i++;
	res = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (buf[i] != '\0' && buf[i] != '\n')
	{
		res[i] = buf[i];
		i++;
	}
	if (buf[i] != '\0' && buf[i] == '\n')
		res[i++] = '\n';
	return (res);
}

char	*get_next_line(int fd)
{

}
