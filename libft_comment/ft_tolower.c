/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:56:40 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 23:23:06 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//man tolower
//tolower() converte a letra c para minúscula, se possível. Se c não for um valor  
// pertencente ao unsigned char, ou EOF, o comportamento desta função é indefinido.

// essa função converte uma letra maiúcula em uma letra minúscula
int	ft_tolower(int c) // entende o int como o valor em ASCII do caracter passado
{
	// se o valor for maior ou igual ao valor do A em ASCII e menor ou igual ao valor do Z em ASCII,
	// isto é, se esse caracter estiver entre A e Z
	if (c >= 'A' && c <= 'Z')
		c = c + 32; // o char aumenta em 32, 32 é a distância numérica de uma certa letra maiúscula
		// para esta mesma letra no formato minúsculo, na tabela ASCII
	return (c); // retornamos c já convertido
}
