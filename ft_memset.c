/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:24:10 by azaghlou          #+#    #+#             */
/*   Updated: 2023/08/20 12:31:14 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t aptx)
{
	char	*str;

	str = b;
	while (aptx)
	{
		*str = (unsigned char)c;
		aptx--;
		str++;
	}
	return (b);
}
