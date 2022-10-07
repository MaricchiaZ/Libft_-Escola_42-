/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:43:28 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/14 21:43:50 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <strings.h>

char	*ft_strrchr(const char *s, int c);

int	main(void)
{
	printf("\n");
	printf("ft_strrchr\n");
	char rr_s1[6] = {"amora"};
	char rr_s2[8] = {"dourado"};
	char rr_s3[11] = {"querofugir"};

	int rr_i1 = 'a';
	int rr_i2 = 'r';
	int rr_i3 = 'i';
	printf("%s\n", ft_strrchr(rr_s1, rr_i1));
	printf("%s\n", ft_strrchr(rr_s2, rr_i2));
	printf("%s\n", ft_strrchr(rr_s3, rr_i3));

	printf("\n");
	printf("strrchr\n");
	char rr_s12[6] = {"amora"};
	char rr_s22[8] = {"dourado"};
	char rr_s32[11] = {"querofugir"};

	int rr_i12 = 'a';
	int rr_i22 = 'r';
	int rr_i32 = 'i';
	printf("%s\n", strrchr(rr_s12, rr_i12));
	printf("%s\n", strrchr(rr_s22, rr_i22));
	printf("%s\n", strrchr(rr_s32, rr_i32));
}
