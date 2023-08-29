/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:00:40 by azaghlou          #+#    #+#             */
/*   Updated: 2023/08/20 12:30:49 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = -1;
	s1 = (char *)dst;
	s2 = (char *)src;
	if (!dst && !src)
		return (0);
	while (++i < n)
		s1[i] = s2[i];
	return (dst);
}