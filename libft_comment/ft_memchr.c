/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:04:23 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 14:40:56 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//man memchr:
//A função memchr() escaneia os n bytes iniciais da memória área apontada por s 
//para a primeira aparição do int c (valor do char na tabela ASCII). Tanto c como o bytes da área 
//de memória apontados por s são interpretados como unsigned char.

//essa função procuca os char C nos n bytes da memória iniciada no ponteiro s
void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i; // um índice para percorrer essa área da memória
	unsigned char	*src; //um ponteiro auxiliar para receber o conteúdo de s

	i = 0; // o índice inicia-se no zero
	src = (unsigned char *)s; //nosso ponteiro auxiliar recebe s já convertido para unsigned char 
	while (n) //enquanto n existir, ou seja n não for nulo
	{
		if (src[i] == (unsigned char) c) //conferimos se src[i] é idêntico ao char c 
			return (&((void *)src)[i]); // se sim, retormamos o ponteiro de src[i] convertido para ponteiro void
		i++; //caso contrário andamos para o próximo byte
		n--; // e n reduz uma unidade
	}
	return (NULL); //se não retornou no if é por que não temos nenhuma ocorrência do c nesta área de memória
	//então retornamos null
}
