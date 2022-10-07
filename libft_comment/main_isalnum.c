/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:49:46 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/14 20:50:22 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <strings.h>

int	ft_isalnum(int c);

int	main(void)
{
	printf("\n");
	printf("ft_alnum \talnum\n");
	char	g;
	char	h;
	char 	i;

	g = '2';
	h = '+';
	i = 'm';

	printf("%d \t\t%d\n", ft_isalnum(g), isalnum(g));
	printf("%d \t\t%d\n", ft_isalnum(h), isalnum(h));
	printf("%d \t\t%d\n", ft_isalnum(i), isalnum(i));
}