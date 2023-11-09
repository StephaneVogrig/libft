/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:13:37 by svogrig           #+#    #+#             */
/*   Updated: 2023/11/09 00:08:03 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_join;
	char	*str_join;
	int		len_s1;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_join = len_s1 + ft_strlen(s2);
	str_join = ft_calloc(len_join + 1, sizeof(char));
	if (!str_join)
		return (NULL);
	ft_strlcpy(str_join, s1, len_s1);
	ft_strlcat(str_join, s2, len_join);
	return (str_join);
}
