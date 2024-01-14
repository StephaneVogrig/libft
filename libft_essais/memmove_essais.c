/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_essais.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:29:53 by svogrig           #+#    #+#             */
/*   Updated: 2023/11/14 13:29:36 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>

int	main(void)
{
	char	*dest;
	char	*src;
	char	*res;
	char	buf[5];
	size_t	n;

	dest = NULL;
	src = NULL;
	res = memmove(dest, src, 0);
	printf("NULL NULL 0 = %s\n", res);

	dest = NULL;
	src = "src";
	res = memmove(dest, src, 0);
	printf("NULL \"src\" 0 = %s\n", res);

	dest = buf;
	memset(buf, '.', 5);
	src = NULL;
	write(1, "..... NULL 0 = ", 15);
	res = memmove(dest, src, 0);
	write(1, res, 5);
	write(1, "\n", 1);

	memset(buf, '.', 5);
	src = "src";
	n = 3;
	write(1, "..... \"src\" 3 = ", 16);
	res = memmove(buf, src, n);
	write(1, res, 5);
	write(1, "\n", 1);

	memset(buf, '.', 5);
	src = "src";
	n = 5;
	write(1, "..... \"src\" 5 = ", 16);
	res = memmove(buf, src, n);
	write(1, res, 5);
	write(1, "\n", 1);

	memset(buf, '.', 5);
	src = "src";
	n = 10;
	write(1, "..... \"src\" 10 = ", 17);
	res = memmove(buf, src, n);
	write(1, res, 5);
	write(1, "\n", 1);

/*
*/	

/************************************************************************************************/
/*  cas ou memmove segfault                                                                      */
/************************************************************************************************/
/*
	dest = NULL;
	src = NULL;
	write(1, "NULL NULL 5 = ", 14);
	res = memmove(dest, src, 5);

	dest = NULL;
	src = "src";
	write(1, "NULL \"src\" 3 = ", 15);
	res = memmove(dest, src, 3);

	bzero(buf, 5);
	memset(buf, '.', 5);
	src = NULL;
	write(1, "..... NULL 3 = ", 17);
	res = memmove(buf, src, 3);
	printf("NULL \"src\" 0 = %s\n", res);
*/
}
