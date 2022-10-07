/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:59:46 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 11:33:08 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// man isascii:
//verifica se o c é um unsigned char de 7 bits que se encaixa no 
//conjunto de caracteres ASCII.

int	ft_isascii(int c) //recebe um int (valor em ASCII de um caracter)
{
	// confere se c está entre o 0 (nul) e o 127 (del) na tebela ascii
	if (c >= 0 && c <= 127) 
		return (1); //se sim, retorna 1 - ou seja verdade
	else
		return (0); // senão retorna 0 - ou seja falso
}
