/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:48:05 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 11:26:06 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


//man bzero:
//A função bzero() apaga os dados nos n bytes da memória a partir do local apontado por s,
// escrevendo zeros (bytes contendo '\0') para essa área.

// essa função zera/limpa/coloca byte nulo/ coloca '\0' uma área da memória
void	ft_bzero(void *s, int n) //recebe um ponteiro pra uma área da memória e o número de bytes q deve limpar
{
	int	i; //índice auxiliar para percorrer a memória

	i = 0; //índice começa no 0
	while (n && s) //enquanto a string s e o n forem verdadeiros, existirem, ou seja, não forem nulos
	{
		*(unsigned char *)(s + i) = '\0'; //fazemos um cast do ponteiro void de s para um ponteiro unsigned char
		// e somamos o s ao índice, fazendo uma aritmérica de ponteiro, 
		//e  cada byte que passamos recebe o byte nulo '\0' 
		n--; //decrementamos o n para agir apenas nos n bytes pedidos
	}
}
