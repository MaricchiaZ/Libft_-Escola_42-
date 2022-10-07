/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:33:17 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/05 20:07:57 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <strings.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size);

int	main(void)
{
	char	dest[10] = {"amora"};
	char	destc[10] = {"amora"};
	const char	src[10] = {"fria"};
	size_t	size = 10;
	printf("\n");
	printf("teste 1 d.5/10 s.4/10 s.10\n");
	printf("src = %s\n", src);
	printf("dest = %s\n", dest);
	printf("%zu\n", ft_strlcat(dest, src, size));
	printf("src = %s\n", src);
	printf("dest = %s\n", dest);
	printf("original\n");
	printf("src = %s\n", src);
	printf("dest = %s\n", destc);
	printf("%zu\n", strlcat(destc, src, size));
	printf("src = %s\n", src);
	printf("dest = %s\n", destc);

	char	dest_t2[10] = {"amora"};
	char	destc_t2[10] = {"amora"};
	const char	src_t2[10] = {"fria"};
	size_t	size_t2 = 0;
	printf("\n");
	printf("teste 2 d.5/10 s.4/10 s.0\n");
	printf("src = %s\n", src_t2);
	printf("dest = %s\n", dest_t2);
	printf("%zu\n", ft_strlcat(dest_t2, src_t2, size_t2));
	printf("src = %s\n", src_t2);
	printf("dest = %s\n", dest_t2);
	printf("original\n");
	printf("%zu\n", strlcat(destc_t2, src_t2, size_t2));
	printf("src = %s\n", src_t2);
	printf("dest = %s\n", destc_t2);

	char	dest_t3[10] = {"amora"};
	char	destc_t3[10] = {"amora"};
	const char	src_t3[10] = {"fria"};
	size_t	size_t3 = 5;
	printf("\n");
	printf("teste 3 d.5/10 s.4/10 s.5\n");
	printf("src = %s\n", src_t3);
	printf("dest = %s\n", dest_t3);
	printf("%zu\n", ft_strlcat(dest_t3, src_t3, size_t3));
	printf("src = %s\n", src_t3);
	printf("dest = %s\n", dest_t3);
	printf("original\n");
	printf("%zu\n", strlcat(destc_t3, src_t3, size_t3));
	printf("src = %s\n", src_t3);
	printf("dest = %s\n", destc_t3);

	char	dest_t4[10] = {"amora"};
	char	destc_t4[10] = {"amora"};
	const char	src_t4[10] = {"fria"};
	size_t	size_t4 = 7;
	printf("\n");
	printf("teste 4 d.5/10 s.4/10 s.7\n");
	printf("src = %s\n", src_t4);
	printf("dest = %s\n", dest_t4);
	printf("%zu\n", ft_strlcat(dest_t4, src_t4, size_t4));
	printf("src = %s\n", src_t4);
	printf("dest = %s\n", dest_t4);
	printf("original\n");
	printf("%zu\n", strlcat(destc_t4, src_t4, size_t4));
	printf("src = %s\n", src_t4);
	printf("dest = %s\n", destc_t4);

	char	dest_t5[11] = {"0123456789"};
	char	destc_t5[11] = {"0123456789"};
	const char	src_t5[10] = {"fria"};
	size_t	size_t5 = 0;
	printf("\n");
	printf("teste 5 d.10/11 s.4/10 s.0\n");
	printf("src = %s\n", src_t5);
	printf("dest = %s\n", dest_t5);
	printf("%zu\n", ft_strlcat(dest_t5, src_t5, size_t5));
	printf("src = %s\n", src_t5);
	printf("dest = %s\n", dest_t5);
	printf("original\n");
	printf("%zu\n", strlcat(destc_t5, src_t5, size_t5));
	printf("src = %s\n", src_t5);
	printf("dest = %s\n", destc_t5);

	char	dest_t6[11] = {"0123456789"};
	char	destc_t6[11] = {"0123456789"};
	const char	src_t6[10] = {"fria"};
	size_t	size_t6 = 4;
	printf("\n");
	printf("teste 6 d.10/11 s.4/10 s.4\n");
	printf("src = %s\n", src_t6);
	printf("dest = %s\n", dest_t6);
	printf("%zu\n", ft_strlcat(dest_t6, src_t6, size_t6));
	printf("src = %s\n", src_t6);
	printf("dest = %s\n", dest_t6);
	printf("original\n");
	printf("%zu\n", strlcat(destc_t6, src_t6, size_t6));
	printf("src = %s\n", src_t6);
	printf("dest = %s\n", destc_t6);

	char	dest_t7[11] = {"0123456789"};
	char	destc_t7[11] = {"0123456789"};
	const char	src_t7[10] = {"fria"};
	size_t	size_t7 = 11;
	printf("\n");
	printf("teste 7 d.10/11 s.4/10 s.11\n");
	printf("src = %s\n", src_t7);
	printf("dest = %s\n", dest_t7);
	printf("%zu\n", ft_strlcat(dest_t7, src_t7, size_t7));
	printf("src = %s\n", src_t7);
	printf("dest = %s\n", dest_t7);
	printf("original\n");
	printf("%zu\n", strlcat(destc_t7, src_t7, size_t7));
	printf("src = %s\n", src_t7);
	printf("dest = %s\n", destc_t7);

	char	dest_t8[11] = {"0123456789"};
	char	destc_t8[11] = {"0123456789"};
	const char	src_t8[10] = {"fria"};
	size_t	size_t8 = 14;
	printf("\n");
	printf("teste 8 d.10/11 s.4/10 s.14\n");
	printf("%zu\n", ft_strlcat(dest_t8, src_t8, size_t8));
	printf("%s\n", dest_t8);
	printf("original\n");
	printf("%zu\n", strlcat(destc_t8, src_t8, size_t8));
	printf("%s\n", destc_t8);

	char	dest_t9[11] = {"0123456789"};
	char	destc_t9[11] = {"0123456789"};
	const char	src_t9[10] = {"fria"};
	size_t	size_t9 = 15;
	printf("\n");
	printf("teste 9 d.10/11 s.4/10 s.15\n");
	printf("%zu\n", ft_strlcat(dest_t9, src_t9, size_t9));
	printf("%s\n", dest_t9);
	printf("original\n");
	printf("%zu\n", strlcat(destc_t9, src_t9, size_t9));
	printf("%s\n", destc_t9);

	char	dest_t10[11] = {"0123456789"};
	char	destc_t10[11] = {"0123456789"};
	const char	src_t10[10] = {"fria"};
	size_t	size_t10 = 15;
	printf("\n");
	printf("teste 10 d.10/11 s.4/10 s.16\n");
	printf("%zu\n", ft_strlcat(dest_t10, src_t10, size_t10));
	printf("%s\n", dest_t10);
	printf("original\n");
	printf("%zu\n", strlcat(destc_t10, src_t10, size_t10));
	printf("%s\n", destc_t10);

	char	dest_t11[30] = {"0123456789"};
	char	destc_t11[30] = {"0123456789"};
	const char	src_t11[30] = {"fria"};
	size_t	size_t11 = 15;
	printf("\n");
	printf("teste 11 d.10/30 s.4/30 s.14\n");
	printf("%zu\n", ft_strlcat(dest_t11, src_t11, size_t11));
	printf("%s\n", dest_t11);
	printf("original\n");
	printf("%zu\n", strlcat(destc_t11, src_t11, size_t11));
	printf("%s\n", destc_t11);

	char	dest_t12[11] = {"0123456789"};
	char	destc_t12[11] = {"0123456789"};
	const char	src_t12[10] = {"fria"};
	size_t	size_t12 = 15;
	printf("\n");
	printf("teste 12 d.10/30 s.4/30 s.15\n");
	printf("%zu\n", ft_strlcat(dest_t12, src_t12, size_t12));
	printf("%s\n", dest_t12);
	printf("original\n");
	printf("%zu\n", strlcat(destc_t12, src_t12, size_t12));
	printf("%s\n", destc_t12);

	char	dest_t13[30] = {"0123456789"};
	char	destc_t13[30] = {"0123456789"};
	const char	src_t13[30] = {"fria"};
	size_t	size_t13 = 15;
	printf("\n");
	printf("teste 13 d.10/30 s.4/30 s.16\n");
	printf("%zu\n", ft_strlcat(dest_t13, src_t13, size_t13));
	printf("%s\n", dest_t13);
	printf("original\n");
	printf("%zu\n", strlcat(destc_t13, src_t13, size_t13));
	printf("%s\n", destc_t13);
	
	char	dest_t14[30] = {"012345678901234567890123456789"};
	char	destc_t14[30] = {"012345678901234567890123456789"};
	const char	src_t14[30] = {"fria"};
	size_t	size_t14 = 15;
	printf("\n");
	printf("teste 14 d.30/30 s.4/30 s.14\n");
	printf("%zu\n", ft_strlcat(dest_t14, src_t14, size_t14));
	printf("%s\n", dest_t14);
	printf("original\n");
	printf("%zu\n", strlcat(destc_t14, src_t14, size_t14));
	printf("%s\n", destc_t14);

	char	dest_t15[31] = {"012345678901234567890123456789"};
	char	destc_t15[31] = {"012345678901234567890123456789"};
	const char	src_t15[10] = {"fria"};
	size_t	size_t15 = 14;
	printf("\n");
	printf("teste 15 d.30/31 s.4/30 s.14\n");
	printf("%zu\n", ft_strlcat(dest_t15, src_t15, size_t15));
	printf("%s\n", dest_t15);
	printf("original\n");
	printf("%zu\n", strlcat(destc_t15, src_t15, size_t15));
	printf("%s\n", destc_t15);

	char	dest_t16[30] = {""};
	char	destc_t16[30] = {""};
	const char	src_t16[30] = {"fria"};
	size_t	size_t16 = 15;
	printf("\n");
	printf("teste 16 d.0/30 s.4/30 s.16\n");
	printf("%zu\n", ft_strlcat(dest_t16, src_t16, size_t16));
	printf("%s\n", dest_t16);
	printf("original\n");
	printf("%zu\n", strlcat(destc_t16, src_t16, size_t16));
	printf("%s\n", destc_t16);

	char	dest_t17[30] = {""};
	char	destc_t17[30] = {""};
	const char	src_t17[30] = {""};
	size_t	size_t17 = 15;
	printf("\n");
	printf("teste 17 d.0/30 s.0/30 s.16\n");
	printf("%zu\n", ft_strlcat(dest_t17, src_t17, size_t17));
	printf("%s\n", dest_t17);
	printf("original\n");
	printf("%zu\n", strlcat(destc_t17, src_t17, size_t17));
	printf("%s\n", destc_t17);

	char	dest_t18[30] = {"MORA"};
	char	destc_t18[30] = {"MORA"};
	const char	src_t18[30] = {""};
	size_t	size_t18 = 15;
	printf("\n");
	printf("teste 18 d.4/30 s.0/30 s.16\n");
	printf("%zu\n", ft_strlcat(dest_t18, src_t18, size_t18));
	printf("%s\n", dest_t18);
	printf("original\n");
	printf("%zu\n", strlcat(destc_t18, src_t18, size_t18));
	printf("%s\n", destc_t18);
}
