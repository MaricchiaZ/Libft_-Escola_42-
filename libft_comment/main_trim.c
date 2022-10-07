/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_trim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:32:38 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/06 23:02:57 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <strings.h>

char	*ft_strtrim(char const *s1, char const *set);

int main(void)
{
    char    *s1 = {"   xxxtripouille"};
    char    *set = {" x"};
    printf("%s\n \n", ft_strtrim(s1, set));

    char    *s11 = {"tripouille   xxx"};
    char    *set1 = {" d"};
    printf("%s\n \n", ft_strtrim(s11, set1));

    char    *s12 = {"   xxxtripouille   xxx"};
    char    *set2 = {" x"};
    printf("%s\n \n", ft_strtrim(s12, set2));

    char    *s13 = {"   xxx   xxx"};
    char    *set3 = {" x"};
    printf("%s\n \n", ft_strtrim(s13, set3));

    char    *s14 = {""};
    char    *set4 = {"123"};
    printf("%s\n \n", ft_strtrim(s14, set4));
    
    char    *s15 = {"123"};
    char    *set5 = {""};
    printf("%s\n \n", ft_strtrim(s15, set5));

    char    *s16 = {""};
    char    *set6 = {""};
    printf("%s\n \n", ft_strtrim(s16, set6));

    char    *s17 = {"abcdba"};
    char    *set7 = {"acb"};
    printf("%s\n \n", ft_strtrim(s17, set7));

    return (0);
}
