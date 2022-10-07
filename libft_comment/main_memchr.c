/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:45:27 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/14 21:46:00 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <strings.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(void)
{
	printf("\n");
	printf("ft_memchr\n");
	char mchr_s[6] = {"amora"};
	size_t mchr_st = 5;
	int mchr_c1 = 'r';
	int mchr_c2 = 'a';
	printf("%s\n", (char *) ft_memchr(mchr_s, mchr_c1, mchr_st));
	printf("%s\n", (char *) ft_memchr(mchr_s, mchr_c2, mchr_st));

	printf("\n");
	printf("memchr\n");
	char mchr_s2[6] = {"amora"};
	size_t mchr_st2 = 5;
	int mchr_c12 = 'r';
	int mchr_c22 = 'a';
	printf("%s\n", (char *) memchr(mchr_s2, mchr_c12, mchr_st2));
	printf("%s\n", (char *) memchr(mchr_s2, mchr_c22, mchr_st2));
}
