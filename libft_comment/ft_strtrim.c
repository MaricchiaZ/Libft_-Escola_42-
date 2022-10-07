/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 00:55:14 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 22:45:34 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//descrição da função nas diretrizes da tarefa:
// Aloca (com malloc(3)) e devolve uma cópia de 's1' com os caracteres especificados 
// em 'set' removidos do início e do final da cadeia. O retorno é cortado em cadeia ou NULL 
//se a alocação falhar.

//corta os elementos da string set do início e do fim da string s1
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	lenght_s1; //criamos uma variável que vai receber o tamanho da string s1

	if (s1 == NULL || set == NULL) // se ou s1 ou set forem vazias
		return (NULL); // retornamos NULL
	while (*s1 && ft_strchr(set, *s1)) // enquanto s1 existir e o retorno da função ft_strchr
	// que procura o caracter apontado por s1 na string set não for zero ...
		s1++; // avançamos o ponteiro da string s1
	lenght_s1 = ft_strlen(s1); //lenght_s1 recebe o tamanho da s1 já descontados os caracteres 
	//que devem ser cortados
	while (lenght_s1 && ft_strchr(set, s1[lenght_s1])) //enquanto o comprimento existir e a 
	// e o retorno da função ft_strchr que procura o caracter apontado por s1 na string set não for zero ...
		lenght_s1--; // retornamos uma unidade no comprimento lenght_s1
	// retornamos uma subtring criada pela função ft_substr
	// a função ft_substr recebe o ponteiro da s1 já convertido para um ponteiro char, esse ponteiro 
	//já aponta para a região da s1 que não tem mais os caracteres que devem ser cortados
	// a substring comeca a cópia no byte zero do ponteiro s1 passado
	// e a cópia ocorre até o lenght_s1 que já não passa pelos caracteres finais que devem ser 
	//retirados + 1 byte do '\0'
	//resumindo :) a função ft_subst cria uma subtring de s1 já limpa do que deve ser retirado
	return (ft_substr((char *)s1, 0, lenght_s1 + 1));
}
