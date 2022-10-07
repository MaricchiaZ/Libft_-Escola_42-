/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 23:30:49 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/14 21:06:04 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

man 
//Aplica a função 'f' a cada caractere da cadeia 's', e passa seu índice como primeiro 
//argumento para criar uma nova cadeia (com malloc(3)) resultante de sucessivas aplicações 
//da função 'f'. Retorna a string criada a partir das sucessivas aplicações de 'f'. Devolve 
//NULL se a alocação falhar.

// essa função aloca e copia os membros da string s passados pela função f
// em uma nova string
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str; //criamos um ponteiro para a nossa nova string
	int		i; //criamos um índice i

	i = 0; //o índice inicia zerado
	new_str = (char *) malloc (sizeof(char) * (ft_strlen(s) + 1)); //o ponteiro recebe
	// o malloc do tamanho da string s mais 1 byte, para acomodar o '\0' no final 
	if (new_str == NULL) // se a nova string new_str estiver vazia, a mallocação deu errado
		return (NULL); // então retornamos null
	while (s[i]) // enquanto s na posição i existir, ou seja for diferente de nulo
	{
		new_str[i] = f(i, s[i]);  // a nova string na posição i recebe..
		// a ação da função f que aplica o índice i sobre o valor da string s na posição i
		i++; // nosso índice ganha uma unidade
	}
	new_str[i] = '\0'; // a nova string new_str na posição i recebe o byte nulo
	return (new_str); // retornamos a nova string (new_str)
}
