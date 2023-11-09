/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:03:37 by svogrig           #+#    #+#             */
/*   Updated: 2023/11/06 08:38:00 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	un_char;

	ptr = (unsigned char *)s;
	un_char = (unsigned char)c;
	while (n)
	{
		if (*ptr == un_char)
			return (ptr);
		++ptr;
		--n;
	}
	return (NULL);
}
