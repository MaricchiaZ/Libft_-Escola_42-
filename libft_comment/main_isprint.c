/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:51:53 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/14 20:53:03 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <strings.h>

int	ft_isprint(int c);

int	main(void)
{
	printf("\n");
	printf("ft_isprint \tisprint\n");
	char	m;
	char	n;
	char 	o;

	m = 'a';
	n = '\n';
	o = '_';

	printf("%d \t\t%d\n", ft_isprint(m), isprint(m));
	printf("%d \t\t%d\n", ft_isprint(n), isprint(n));
	printf("%d \t\t%d\n", ft_isprint(o), isprint(o));
}