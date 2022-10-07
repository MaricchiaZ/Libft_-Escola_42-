/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:44:21 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/14 21:45:03 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <strings.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("\n");
	printf("ft_strncmp\n");
	unsigned int	ncpy_n;

	ncpy_n = 5;
	char			ncpy_s1t[] = {"Amorinhas"};
	char 			ncpy_s2t[] = {"Amora"};
	printf("%d\n", ft_strncmp(ncpy_s1t, ncpy_s2t, ncpy_n));
	printf("%s\n", ncpy_s1t);
	printf("%s\n", ncpy_s2t);

	printf("\n");
	printf("strncmp\n");
	char			ncpy_s1[] = {"Amorinhas"};
	char 			ncpy_s2[] = {"Amora"};
	printf("%d\n", strncmp(ncpy_s1, ncpy_s2, ncpy_n));
	printf("%s\n", ncpy_s1);
	printf("%s\n", ncpy_s2);
}
