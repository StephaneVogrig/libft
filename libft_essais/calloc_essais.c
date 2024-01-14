/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc_essais.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:00:16 by svogrig           #+#    #+#             */
/*   Updated: 2023/11/11 12:36:13 by stephane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*ptr;

	ptr = (char *)calloc(0, 5);
	printf("calloc(0, 5) = %p, sizeof = %lu\n", ptr, sizeof(ptr));
	ptr = (char *)calloc(5, 0);
	printf("calloc(5, 0) = %p sizeof = %lu\n", ptr, sizeof(ptr));
	ptr = (char *)calloc(0, -5);
	printf("calloc(0, -5) = %p sizeof = %lu\n", ptr, sizeof(ptr));
	ptr = (char *)calloc(-5, 0);
	printf("calloc(-5, 0) = %p sizeof = %lu\n", ptr, sizeof(ptr));
	ptr = (char *)calloc(10, 10);
	printf("calloc(10, 10) = %p sizeof = %lu\n", ptr, sizeof(ptr));
}
abort