/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:39:15 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 15:39:07 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//man memset:
//A função memset() preenche os primeiros n bytes da área de memória apontada por s 
//com o conteúdo de c constante. A função memset() retorna um ponteiro para a área de memória s.

//essa função coloca C nos n bytes a partir do apontado por s
void	*ft_memset(void *s, int c, size_t n)
{
	int	i; // criamos um índice

	i = 0; // iniciamos esse índice em zero
	while (n) // enquanto n for verdade, isto é, não for zero
	{
		//o ponteiro void de s, transformado em unsigned char recebe o conteúdo do c também 
		//transformado em unsigned char 
		// usamos o i para fazer uma aritmpetica de ponteiro
		*(unsigned char *)(s + i) = (unsigned char) c;
		i++; // i ganha uma unidade
		n--; // n perde uma unidade
	}
	return (s); //retornamos o ponteiro para s, com a região de memória já preenchia por c 
}
