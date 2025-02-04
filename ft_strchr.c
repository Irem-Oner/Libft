/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioner <ioner@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:24:30 by ioner             #+#    #+#             */
/*   Updated: 2024/11/06 10:50:08 by ioner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	char	c_char;

	c_char = (char)c;
	while (*s != '\0')
	{
		if (*s == c_char)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c_char == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
