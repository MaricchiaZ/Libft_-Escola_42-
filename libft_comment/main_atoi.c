/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:46:56 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/14 21:47:35 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <strings.h>

int	ft_atoi(const char *nptr);

int	main(void)
{
    printf("\n");
    printf("ft_atoi\n");    
    char nptr1[12] = {"-2147483648"};
    char nptr2[12] = {"2147483647"};
    char nptr6[13] = {"21474836479"};
    char nptr3[12] = {""};
    char nptr4[12] = {"-21a83648"};
    char nptr5[12] = {"asasdfs"};
    printf("%d\n",ft_atoi(nptr1));
    printf("%d\n",ft_atoi(nptr2));
    printf("%d\n",ft_atoi(nptr6));
    printf("%d\n",ft_atoi(nptr3));
    printf("%d\n",ft_atoi(nptr4));
    printf("%d\n",ft_atoi(nptr5));

    printf("\n");
    printf("atoi\n");    
    printf("%d\n",atoi(nptr1));
    printf("%d\n",atoi(nptr2));
    printf("%d\n",atoi(nptr6));
    printf("%d\n",atoi(nptr3));
    printf("%d\n",atoi(nptr4));
    printf("%d\n",atoi(nptr5)); 
}
