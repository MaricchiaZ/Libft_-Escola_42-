/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:53:39 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/14 20:55:59 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <strings.h>

int	ft_strlen(const char *s);

int	main(void)
{
	printf("\n");
	printf("ft_strlen \tstrlen\n");
	char	sl_s1[6] = {"amora"};
	char	sl_s2[11] = {"felicidade"};
	printf("%d \t\t%lu\n", ft_strlen(sl_s1), strlen(sl_s1));
    printf("ft_strlen \tstrlen\n");
	printf("%d \t\t%lu\n", ft_strlen(sl_s2), strlen(sl_s2));
}
