/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_essai.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:12:55 by svogrig           #+#    #+#             */
/*   Updated: 2023/11/14 13:37:25 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	main(void)
{
	int		len;
	char	*str;

/* cas qui segfault */
	write(1, "NULL = ", 7);
	str = NULL;
	len = strlen(str);
}
