/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:35:24 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/08 22:47:14 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int a = 1;

	printf("%d\n%s\n\n", a,ft_itoa(a));

	int b = 10;

	printf("%d\n%s\n\n", b,ft_itoa(b));

	int c = -450;

	printf("%d\n%s\n\n", c,ft_itoa(c));

	int d = 0;

	printf("%d\n%s\n\n", d,ft_itoa(d));

	int e = -12344567;

	printf("%d\n%s\n\n", e,ft_itoa(e));

	int f = a;

	printf("%d\n%s\n\n", f,ft_itoa(f));

	int g = 2147483647;

	printf("%d\n%s\n\n", g,ft_itoa(g));

	int h = -2147483648;

	printf("%d\n%s\n\n", h,ft_itoa(h));

	int i = -0;

	printf("%d\n%s\n\n", i,ft_itoa(i));

	int j = -2341;

	printf("%d\n%s\n\n", j,ft_itoa(j));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:09:19 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/08 22:42:16 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "libft.h"

static void	*str_complete(char *str, int ten, long int cpy_n, int i)
{
	while (ten >= 1)
	{
	str[i] = '0' + (cpy_n / ten);
	cpy_n = cpy_n - (cpy_n / ten) * ten;
	ten = ten / 10;
	i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int			signal_loc;
	int			ten;
	char		*str;
	int			i;
	long int	cpy_n;

	signal_loc = 0;
	ten = 1;
	i = 1;
	cpy_n = n;
	if (cpy_n < 0)
	{
		signal_loc = 1;
		cpy_n = cpy_n * -1;
	}
	while (ten <= cpy_n / 10)
	{
		ten = ten * 10;
		i++;
	}
	str = (char *) malloc(sizeof(char) * (i + signal_loc + 1));
	i = 0;
	if (signal_loc == 1)
		str[i++] = '-';
	str_complete(str, ten, cpy_n, i);
	return (str);
}

*/