/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:57:59 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/14 20:58:33 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <strings.h>

void	ft_bzero(void *s, int n);

int	main(void)
{
	printf("\n");
	printf("ft_bzero\n");
	int	bz_n1;
	int bz_i;
	char bz_s1[6] = {"amora"};
	int bz_si1[6] = {'1','2','3','4','5'};

	bz_n1 = 6;
	bz_i = 0;
	ft_bzero(bz_s1, bz_n1);
	printf("%s /(vazio)\n", bz_s1);
	ft_bzero(bz_si1, bz_n1);
	while (bz_n1)
	{
		printf("%d, ", bz_si1[bz_i]);
		bz_i++;
		bz_n1--;
	}
	printf("\n");

	printf("\n");
	printf("bzero\n");
	int	bz_n2;
	char bz_s2[6] = {"amora"};
	int bz_si2[6] = {'1','2','3','4','5'};

	bz_n2 = 6;
	bzero(bz_s2, bz_n2);
	printf("%s /(vazio)\n", bz_s2);
	bz_i = 0;
	bzero(bz_si2, bz_n2);
	while (bz_n2)
	{
		printf("%d, ", bz_si2[bz_i]);
		bz_i++;
		bz_n2--;
	}
	printf("\n");
}
