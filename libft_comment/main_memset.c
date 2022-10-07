/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:56:14 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/14 20:57:25 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <strings.h>

void	*ft_memset(void *s, int c, int n);

int	main(void)
{
	printf("\n");
	printf("ft_memset\n");
	int ms_c;
	int ms_n;
	int ms_i;
	char ms_s1[6] = {'1', '2', '3', '4', '5'};
	char mm_s2[6] = {'1', '2', '3', '4', '5'};
	ms_c = 0;
	ms_n = 6;
	ms_i = 0;

	ft_memset(ms_s1, ms_c, ms_n);
	while (ms_n)
	{
		printf("%d, ", ms_s1[ms_i]);
		ms_i++;
		ms_n--;
	}
	printf("\n");

	ms_n = 6;
	printf("\n");
	printf("memset\n");
	memset(mm_s2, ms_c, ms_n);
	ms_i = 0;
	while (ms_n)
	{
		printf("%d, ", mm_s2[ms_i]);
		ms_i++;
		ms_n--;
	}
	printf("\n");
}