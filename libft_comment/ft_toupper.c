/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:49:09 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 23:23:02 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//man toupper:
//toupper() converte a letra c para maiúscula, se possível. Se c não for um valor não
// unsigned, ou EOF, o comportamento destas funções é indefinido.

// essa função converte uma letra minúscula em uma letra maiúcula
int	ft_toupper(int c) // entende o int como o valor em ASCII do caracter passado
{
	// se o valor for maior ou igual ao valor do a em ASCII e menor ou igual ao valor do a em ASCII
	if (c >= 'a' && c <= 'z') // isto é se esse caracter estiver entre a e z
		c = c - 32; // o valor do char diminui em 32; 32 é a distância numérica de uma certa letra minúscula
		// para esta mesma letra no seu formato maiúsculo, na tabela ASCII
	return (c); // retornamos c já convertido
}
