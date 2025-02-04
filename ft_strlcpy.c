/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioner <ioner@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:27:07 by ioner             #+#    #+#             */
/*   Updated: 2024/11/06 10:09:03 by ioner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	n;

	n = 0;
	if (dstsize > 0)
	{
		while (src[n] && n < dstsize - 1)
		{
			dst[n] = src[n];
			n++;
		}
		dst[n] = '\0';
	}
	while (src[n])
	{
		n++;
	}
	return (n);
}
