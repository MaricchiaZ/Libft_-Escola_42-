/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:18:12 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 11:36:19 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// man isdigit:
//verifica a existência de um dígito (0 a 9).

int	ft_isdigit(int c) //recebe um int (valor em ASCII de um caracter)
{
	// verifica se o c está entre o 0 a 9 na tabela ASCII
	if (c >= 48 && c <= 57) 
		return (1); // se sim, retorna 1 - ou seja verdade
	else
		return (0); // senão retorna 0 - ou seja falso
}
