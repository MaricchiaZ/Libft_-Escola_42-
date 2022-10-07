/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:59:20 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/14 21:36:51 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <strings.h>

void	*ft_memcpy(void *dest, const void *src, int n);

int	main(void)
{
	printf("\n");
	printf("ft_memcpy\n");
	int	mc_n;
	char dest[6] = {"amora"};
	char src[6] = {"ioioi"};	

	mc_n = 5;
	ft_memcpy(dest, src, mc_n);
	printf("%s \n", dest);

	printf("\n");
	printf("memcpy\n");
	size_t	mc_n2;
	char dest2[6] = {"amora"};
	char src2[6] = {"ioioi"};	

	mc_n2 = 5;
	memcpy(dest2, src2, mc_n2);
	printf("%s \n", dest2);
}
