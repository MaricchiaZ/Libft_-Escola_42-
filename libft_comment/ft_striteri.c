/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 00:03:50 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 17:28:08 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//descrição da função nas diretrizes da tarefa:
// Aplica a função 'f' em cada caracter da string passada como argumento. passando seu 
//índice como primeiro argumento. Cada caractere é passado por endereço para 'f' 
//para ser modificado se necessário.


// essa função modifica cada um dos itens da string s, pois aplica em cada ítem a função f que recebeu
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i; // criamos um índice auxiliar para percorrer a string s

	i = 0; // o índice começa em zero 
	while (s[i]) // enquanto s[i] for verdade, ou seja, não for nulo
	{
		f(i, &s[i]); //a função f aplica i sobre o conteúdo de s[i]
		i++; // e seguimos para a próxima posição da string
	}
	s[i] = '\0'; // a posição final recebe o byte nulo
}
