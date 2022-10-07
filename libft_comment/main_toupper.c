/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:40:44 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/14 21:41:07 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <strings.h>

int	ft_toupper(int c);

int	main(void)
{
	printf("\n");
	printf("ft_toupper\n");
	int tou_a;
	int tou_b;
	int tou_c;

	tou_a = 'a';
	tou_b = 'b';
	tou_c = 'c';
	printf("%c\n", ft_toupper(tou_a));
	printf("%c\n", ft_toupper(tou_b));
	printf("%c\n", ft_toupper(tou_c));

	printf("\n");
	printf("toupper\n");
	int tou_a2;
	int tou_b2;
	int tou_c2;

	tou_a2 = 'a';
	tou_b2 = 'b';
	tou_c2 = 'c';
	printf("%c\n", toupper(tou_a2));
	printf("%c\n", toupper(tou_b2));
	printf("%c\n", toupper(tou_c2));
}
