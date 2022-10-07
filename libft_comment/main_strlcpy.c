/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:38:44 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/14 21:39:25 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <strings.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	printf("\n");
	printf("ft_strlcpy\n");
	unsigned int	strl_size;

	strl_size = 4;
	char	strl_src2[] = {"amoras"};
	char	strl_dest2[] = {"vazias sao as amoras"};
	printf("%d\n", ft_strlcpy(strl_dest2, strl_src2, strl_size));
	printf("%s\n", strl_src2);
	printf("%s\n", strl_dest2);
	printf("\n");

	printf("strlcpy\n");
	char	strl_src1[] = {"amoras"};
	char	strl_dest1[] = {"vazias sao as amoras"};
	printf("%zu\n", strlcpy(strl_dest1, strl_src1, strl_size));
	printf("%s\n", strl_src1);
	printf("%s\n", strl_dest1);	
}
