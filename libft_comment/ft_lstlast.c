/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:57:48 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 13:55:37 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//descrição da função nas diretrizes da tarefa:
//Retorna o último nó da lista.

//esta função encontra e retorna o último nó da lista
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst) // se a lista está vazia, não retornamos nada;
		return (NULL);
	while (lst->next) // enquanto encontrarmos algo armazenado no next, 
		lst = lst->next; // olhamos para o objeto (variável membro) 'next' desse ponteiro
		// quando encontrarmos um next vazio, ou lst->next = NULL, estamos no
		//útimo ítem (nó) da lista, sabemos disso por que o ponteiro dele não aponta
		//para nenhum outro nó, logo ele é o último
	return (lst); // aí só retornarmos o ponteiro para este nó :)
}
