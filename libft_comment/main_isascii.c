/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:50:49 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/14 20:51:19 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <strings.h>

int	ft_isascii(int c);

int	main(void)
{
	printf("\n");
	printf("ft_isascii \tisascii\n");
	char	j;
	char	k;
	char 	l;

	j = '2';
	k = '\n';
	l = '~';

	printf("%d \t\t%d\n", ft_isascii(j), isascii(j));
	printf("%d \t\t%d\n", ft_isascii(k), isascii(k));
	printf("%d \t\t%d\n", ft_isascii(l), isascii(l));
}