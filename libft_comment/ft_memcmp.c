/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:48:15 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 14:54:45 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//man memcmp:
//A função memcmp() compara os primeiros n bytes (cada um interpretado como um unsigned char) 
//das áreas de memória s1 e s2.  A função memcmp() retorna um número inteiro menor que, igual a, 
//ou maior que zero se forem encontrados os primeiros n bytes de s1, respectivamente, para ser menor, 
//igual ou maior do que o primeiros n bytes de s2.

//essa função compara os n bytes de s1 e s2, e retorna a diferença em ASCII dos caracteres presentes nelas
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1; //criamos uma str1 aux que ira receber a s1
	const unsigned char	*str2; //criamos uma str2 aux que ira receber a s2
	size_t				i; // um i, índice que percorrerá as s, e será comparado com o n passado

	str1 = s1; // str1 aux recebe a s1
	str2 = s2; // str2 aux recebe a s2
	i = 0; // o índice começa zerado
	if (n == 0) // se o número de bytes para a comparação for zero, retornamos, pois não temos o que fazer aqui :)
		return (0);
	while (i < n) //enquanto o i for menor que o n (usamos menor porque iniciamos o i em zero)
	{
		if (str1[i] != str2[i]) //a posição i de str1 é comparada com a i de str2, e se for diferente
		//entraremos nesse if e retornamos essa diferença em ASCII (o valor de str1[i] em ASCII - o valor de str2[i])
			return (str1[i] - str2[i]);
		i++; //caso contrário, isto é, se forem iguais, andamos para o próximo byte
	}
	return (0); // se comparamos os n bytes e não econtramos diferença, retornamos 0, pois 
	// até onde comparamos elas são idênticas
}
