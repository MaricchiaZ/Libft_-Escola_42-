/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 02:23:44 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 19:00:33 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// man strlcat:
// A função strlcat() concatena as strings passadas. A strlcat() toma o tamanho 
//completo do buffer (não apenas o comprimento) e garante a terminação NUL (desde que o tamanho 
//seja maior que 0 ou, no caso de strlcat(), desde que haja pelo menos um byte livre em dst).
// Observe que um byte para o NUL deve ser incluído no tamanho. Observe também que strlcat() 
//opera somente se as strings passadas forem verdadeiras strings da linguagem ''C''. 
//Isto significa que para strlcat() tanto src como dst devem ser terminadas em NUL.
//A função strlcat() acrescenta a string src terminada NUL ao final de dst. 
//Ela anexará no máximo 1 byte de tamanho - strlen(dst) -, terminando NUL o resultado.

//essa função compia a src no final dest até o tamanho de size, garantindo o byte nulo no final e
//retorna o tamanho da cópia
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_src; //variável para receber o tamanho de src
	size_t	i; // índice para percorrer as strings
	size_t	len_dest; //variável para receber o tamanho de dest

	len_dest = ft_strlen(dest); // len_dest recebe o tamamnho de dest obtido pela função ft_strlen
	len_src = ft_strlen(src); // len_src recebe o tamamnho de src obtido pela função ft_strlen
	if (size == 0) // se o size passado for zero
		return (len_src); // retornamos o tamanho da string que deveríamos copiar
	if (size < len_dest + 1) // se o size passado for menor do que o comprimento do destino mais 1 byte 
	// referente ao byte nulo
		return (len_src + size); // retornamos o comprimento da src mais o size
	i = 0; // nosso índice é iniciado zerado
	if (size >= len_dest + 1) // // se o size passado for maior do que o comprimento do destino mais 1 byte 
	// referente ao byte nulo
	{
		while (src[i] && len_dest + i < size - 1) // enquanto a src[i] não for nula e 
		// o comprimento da dest + o índice da cópia forem menor do que o size total passado -1 byte
		// (que está reservado pro byte nulo)
		{
			dest[len_dest + i] = src[i]; // o final da dest dest[len_dest] recebe o conteúdo da src[i]
			// somamos i com o len_dest para o final da dest ir avançando conforme recebe a src[i]
			i++; // i ganha uma unidade
		}		
	}
	dest[len_dest + i] = '\0'; // dest na posição de seu tamanho + o número de bites copiados recebe o '\0'
	return (len_src + len_dest); // depois da cópia feita retornamos o tamanho da src + o tamanho da dest
}
