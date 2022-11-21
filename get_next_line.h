/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarges <afarges@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:30:56 by afarges           #+#    #+#             */
/*   Updated: 2022/10/11 15:30:56 by afarges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#include <unistd.h>
#include <stdlib.h>

char	*get_next_line(int fd);
void	ft_bzero(void *ptr, size_t count);
void    *ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *str);

#endif
