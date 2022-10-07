/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:23:32 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 22:27:08 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//man strchr:
//A função strchr() retorna um ponteiro para a primeira ocorrência do caracter c na string s.
//As funções strchr() devolve um ponteiro para a posição da ocorrência ou NULL se o caracter não for 
//encontrado.  A terminação em byte nulo é considerada parte da cadeia, de modo que se c for
// especificado como '\0', esta função retorna um ponteiro para o terminador (byte nulo).

//retorna um ponteiro para a primeira ocorrência de c na string s
char	*ft_strchr(const char *s, int c)
{
	int				i; // criamos um índice que irá ser usado para percorrer a string
	unsigned char	*str; //criamos um ponteiro auxiliar para receber a string s

	str = (unsigned char *)s; //str recebe o ponteiro da string s convertido para unsigned char
	i = 0; // o ínice começa em zero
	while (str[i] != '\0') // enquanto o str[i] for diferente de nulo, ou seja, não for nulo...
	{
		if (str[i] == (unsigned char) c) // se o conteúdo de str[i] fo idêntico ao C já concertido para unsigned char
		// quer dizer que encontramos a primeira ocorrência de c na string
			return ((char *)str + i); // então retornamos retornamos nosso ponteiro de str já convertido pra ponteiro char
			//adicionado até a posição encontrada
		i++; // caso contrário, apenas vamos para a próxima posição
	}
	if (c == '\0' && str[i] == '\0') // se o caracter que queremos encontrar é o byte nulo, e a str[i] é o byte nulo 
		return ((char *)str + i); // então retornamos retornamos nosso ponteiro de str já convertido pra ponteiro char
			//adicionado até a posição encontrada
	return (NULL); // caso contrário, não econtramos o caracter pedido na strig então retornamos nulo
}
