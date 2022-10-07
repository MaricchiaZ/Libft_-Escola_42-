/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:47:35 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/14 20:48:13 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <strings.h>

int	ft_isalpha(char c);

int	main(void)
{
	printf("\n");
	printf("ft_isalpha \tisalpha\n");
	char	d;
	char	e;
	char 	f;

	d = 'z';
	e = 'H';
	f = '9';
	printf("%d \t\t%d\n",ft_isalpha(d), isalpha(d));
	printf("%d \t\t%d\n",ft_isalpha(e), isalpha(e));
	printf("%d \t\t%d\n",ft_isalpha(f), isalpha(f));
}
