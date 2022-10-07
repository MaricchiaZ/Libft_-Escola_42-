/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:01:48 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 11:40:38 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//man isprint:
// confere se c é qualquer um dis caracteres imprimíveos, incluindo espaço.

int	ft_isprint(int c) //recebe um int (valor em ASCII de um caracter)
{
	// se o caracter estiver abaixo de 32 na ASCII ou acima de 126 ele não é imprimível
	if (c < 32 || c > 126)
		return (0); // nesse caso retornamos 0, pois é falso que ele é imprimível
	else
		return (1); // caso contrário ele é imprimível, então retornamos 1, ou seja verdade.
}
