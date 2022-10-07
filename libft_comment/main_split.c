/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 01:31:19 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/08 18:32:57 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c);

int main(void)
{
    char    *s = strdup("");
    char    c = ' ';
    char    **s1;
    int     i;

    i = 0;
    s1 = ft_split(s, c);
    if (s1[i] && s1[i][0] == '\0')
        printf("fail");
    while (s1 && s1[i])
    {
        printf("%s\n", s1[i]);
        i++;
    }
    i = 0;
    while (s1[i])
    {
        free(s1[i]);
        i++;
    }
    free(s1);
    free(s);
}
