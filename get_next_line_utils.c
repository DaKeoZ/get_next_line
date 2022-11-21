/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarges <afarges@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:30:56 by afarges           #+#    #+#             */
/*   Updated: 2022/10/11 15:30:56 by afarges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(void *ptr, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		*(char *)(ptr + i) = 0;
		i++;
	}
}

void    *ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count > 4294967295 || size > 4294967295)
		return (0);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}