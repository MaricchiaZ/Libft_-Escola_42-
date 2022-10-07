/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:16:51 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 11:33:45 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//man isalpha:
// verifica o caracter passado é alfabético; é equivalente a (isupper(c) || islower(c)).

int	ft_isalpha(char c)//recebe um int (valor em ASCII de um caracter)
{
	// se o caracter c for letra maiúscula OU letra minúscula
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1); // retorna 1 - ou seja verdade
	return (0); // senão retorna 0 - ou seja falso
}
