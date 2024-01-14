/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_essais.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:00:03 by  stephane         #+#    #+#             */
/*   Updated: 2023/11/12 15:59:56 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>

int	main(void)
{
	char	*dest;
	char	*src;
	char	*res;
	char	tab[100];
	size_t	n;

	dest = NULL;
	src = NULL;
	res = memcpy(dest, src, 0);
	printf("NULL NULL 0 = %s\n", res);

	src = "src";
	res = memcpy(dest, src, 0);
	printf("NULL \"src\" 0 = %s\n", res);

	bzero(tab, 100);
	memset(tab, '.', 7);
	src = "src";
	n = 3;
	printf("%s %s %zu = ", tab, src, n);
	res = memcpy(tab, src, n);
	printf("%s\n", res);

	bzero(tab, 100);
	memset(tab, '.', 7);
	src = "src";
	n = 80;
	printf("%s %s %zu = ", tab, src, n);
	res = memcpy(tab, src, n);
	printf("%s\n", res);
	
	bzero(tab, 100);
	memset(tab, '.', 7);
	src = "src";
	n = 120;
	printf("%s %s %zu = ", tab, src, n);
	res = memcpy(tab, src, n);
	printf("%s\n", res);
/*
*/	

/************************************************************************************************/
/*  cas ou memcpy segfault                                                                      */
/************************************************************************************************/
/*
	write(1, "NULL \"src\" 3 = ", 15);
	dest = NULL;
	src = "src";
	res = memcpy(dest, src, 3);
	printf("%s\n", res);
*/
/*
	dest = NULL;
	src = NULL;
	write(1, "NULL NULL 3 = ", 14);
	res = memcpy(dest, src, 3);
	printf("%p", res);
*/
}
