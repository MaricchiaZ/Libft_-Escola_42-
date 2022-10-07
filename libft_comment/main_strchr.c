/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:42:45 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/14 21:43:09 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <strings.h>

char	*ft_strchr(const char *s, int c);

int	main(void)
{
	printf("\n");
	printf("ft_strchr\n");
	char r_s1[6] = {"amora"};
	char r_s2[8] = {"dourado"};
	char r_s3[11] = {"querofugir"};

	int r_i1 = 'a';
	int r_i2 = 'r';
	int r_i3 = 'i';
	printf("%s\n", ft_strchr(r_s1, r_i1));
	printf("%s\n", ft_strchr(r_s2, r_i2));
	printf("%s\n", ft_strchr(r_s3, r_i3));

	printf("\n");
	printf("ft_strchr\n");
	char r_s12[6] = {"amora"};
	char r_s22[8] = {"dourado"};
	char r_s32[11] = {"querofugir"};

	int r_i12 = 'a';
	int r_i22 = 'r';
	int r_i32 = 'i';
	printf("%s\n", strchr(r_s12, r_i12));
	printf("%s\n", strchr(r_s22, r_i22));
	printf("%s\n", strchr(r_s32, r_i32));
}
