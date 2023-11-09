/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:04:07 by svogrig           #+#    #+#             */
/*   Updated: 2023/11/08 16:01:28 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;

	if (little == NULL || big == NULL)
		return (NULL);
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (*big && len)
	{
		if (*big == *little)
		{
			i = 0;
			while (big[i] == little[i] && (len - i) && big[i])
				i++;
			if (little[i] == '\0')
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
