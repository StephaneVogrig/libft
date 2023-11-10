/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:05:47 by svogrig           #+#    #+#             */
/*   Updated: 2023/11/09 18:19:13 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	alloc_size;

	if (nmemb < 0 || size < 0)
		return (NULL);
	if (nmemb > INT_MAX || size > INT_MAX)
		return (NULL);
	if (nmemb * size > INT_MAX)
		return (NULL);
	alloc_size = nmemb * size;
	ptr = malloc(alloc_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, alloc_size);
	return (ptr);
}
