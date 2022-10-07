/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:37:50 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/14 21:38:12 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <strings.h>

void	*ft_memmove(void *dest, const void *src, int n);

int	main(void)
{
	printf("\n");
	printf("ft_memmove\n");
	char mem_dest[6] = {"amora"};
	char mem_src[6] = {"ioioi"};
	int	mem_n;

	mem_n = 3;
	ft_memmove(mem_dest, mem_src, mem_n);
	printf("%s \n", mem_dest);

	printf("\n");
	printf("memmove\n");
	char mem_dest2[6] = {"amora"};
	char mem_src2[6] = {"ioioi"};
	int	mem_n2;

	mem_n2 = 3;
	memmove(mem_dest2, mem_src2, mem_n2);
	printf("%s \n", mem_dest2);
}
