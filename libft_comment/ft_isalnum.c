/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:47:48 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 11:30:03 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//man isalnum:
//checa se um caracter é alfanumérico (letra ou número); é equivalente a (isalpha(c) || isdigit(c)).
 
int	ft_isalnum(int c) //recebe um int (valor em ASCII de um caracter)
{
	// se for letra maiúscula OU letra minúscula        OU número
	if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) || (c >= 48 && c <= 57))
		return (1); // retorna 1 - ou seja verdade
	else
		return (0); // senão retorna 0 - ou seja falso
}
