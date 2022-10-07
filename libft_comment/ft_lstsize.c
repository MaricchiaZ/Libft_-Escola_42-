/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:56:42 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 14:12:58 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//descrição da função nas diretrizes da tarefa:
//Conta o número de nós de uma lista.

int	ft_lstsize(t_list *lst) //descobre o tamanho da lista, contando quantos nós tem
{
	t_list *i; // variável auxiliar/índice para percorrer a lista 
	int		count; //contador para os saber o número de nós
	
	i = lst; // o ponteiro i recebe o endereço da lista
	count = 0; //o contador inicia-se zerado
	while (i != NULL) //enquanto i não for nulo
	{
		count++;  //nosso contador ganha 1
		i = i->next; // e o ponteiro recebe o endereço do próximo nó
	}
	return (count); // retornamos o contador com o números de nós da lista
}
