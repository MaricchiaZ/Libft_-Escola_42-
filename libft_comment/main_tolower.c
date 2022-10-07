/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:41:45 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/14 21:42:06 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <strings.h>

int	ft_tolower(int c);

int	main(void)
{
	printf("\n");
	printf("ft_tolower\n");
	int tol_a;
	int tol_b;
	int tol_c;

	tol_a = 'A';
	tol_b = 'B';
	tol_c = 'C';
	printf("%c\n", ft_tolower(tol_a));
	printf("%c\n", ft_tolower(tol_b));
	printf("%c\n", ft_tolower(tol_c));

	printf("\n");
	printf("tolower\n");
	int tol_a2;
	int tol_b2;
	int tol_c2;

	tol_a2 = 'A';
	tol_b2 = 'B';
	tol_c2 = 'C';
	printf("%c\n", tolower(tol_a2));
	printf("%c\n", tolower(tol_b2));
	printf("%c\n", tolower(tol_c2));
}