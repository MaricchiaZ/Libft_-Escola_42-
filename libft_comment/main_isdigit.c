/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:48:55 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/14 20:49:24 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <strings.h>

int	ft_isdigit(int	c);

int	main(void)
{
	printf("\n");
	printf("ft_isdigit \tisdigit\n");
	int a;
	int b;
	int c;

	a = '0';
	b = '5';
	c = 'd';
	printf("%d \t\t%d\n", ft_isdigit(a), isdigit(a));
	printf("%d \t\t%d\n", ft_isdigit(b), isdigit(b));
	printf("%d \t\t%d\n", ft_isdigit(c), isdigit(c));
}