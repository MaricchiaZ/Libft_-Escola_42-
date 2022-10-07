/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:55:04 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/14 18:27:20 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//man strncmp: 
// A função strncmp() é compara os primeiros (no máximo) n bytes de s1 e s2.
// Ela retorna um inteiro menor que, igual a, ou maior que zero se s1 for encontrado, 
//respectivamente, menor que, igual a, ou maior que s2.

// essa função compara até n bytes de s1 e s2 retorna a diferença em ASCII dos 
//valores encontrados em uma memsma posição de s1 e s2
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i; // criamos um índice para percorrer as strings 
	// é unsigned int para ser comparável ao n passado

	i = 0; // nosso índice começa no zero
	while (i < n) // enqaunto o índice for menor do que o número de bytes passado
	{
		if (s1[i] - s2[i] == 0) // conferimos de a diferença entre os conteúdos é zero
		// se o conteúdo de s1[i] for igual ao de s2[i], a diferença é zero
			i++; //então nosso índice ganha uma unidade, assim avançamos para o próximo byte
		else // caso contrário existe diferença
			return ((unsigned char)s1[i] - (unsigned char)s2[i]); // então retornamos o conteúdo de
			// s1[i] já convertido para unsigned char menos o valor de s2[i] já convertido para unsigned char
	}
	return (0); // caso saia do while sem ter retornado sabemos que não existe diferença
	// entre s1[i] e s2[i] até os n bytes analisados, então retormamos zero, até ali elas são idênticas
}
