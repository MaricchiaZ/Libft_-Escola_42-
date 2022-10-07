/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:02:58 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/01 16:02:58 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//man calloc:
//A função calloc() aloca memória para um conjunto de elementos (ou n membros) nmemb de size bytes de tamanho 
//cada um e retorna um ponteiro para a memória alocada. A memória é inicialmente zerada. Se nmemb 
//ou size for 0, então a função calloc() retorna ou NULL, ou um valor de ponteiro único que pode 
//ser passado mais tarde com sucesso para free().

//função que aloca espaço na memória para n membros de size tamanho cada um, e garante que a memória esteja limpa
void	*ft_calloc(size_t nmemb, size_t size) //recebe o número de membros e o tam de cada um
{
	size_t	aux; //variável aux
	void	*tab; //ponteiro para a memória que alocaremos

	if (nmemb == 0) // se número de membros for 0, retornamos NULL
		return (NULL);
		// se número de membros ou o size, ou a multiplicação dos dois for maior que o size_t max, retornamos NULL
	if (nmemb > 2147483647 || size > 2147483647 || size * nmemb > 2147483647)
		return (NULL);
	aux = (size) * (nmemb); //aux armazena a quantidade de bytes referente a n membros de tamanho size
	tab = malloc(aux); //nosso ponteiro recebe a malocação da quantidade de bytes
	if (tab == NULL) // se o malloc der errado, tab será igual a NULL
		return (NULL); // então retornamos NULL
	ft_bzero(tab, aux); // caso a malocação tenha dado certo "zeramos" a memória dos i bytes
	return (tab); //retornamos nosso ponteiro para os bytes alocados e "limpos"
}
