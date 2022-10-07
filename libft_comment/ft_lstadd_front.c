/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:55:24 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 13:51:30 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//descrição da função nas diretrizes da tarefa:
//Acrescenta o nó 'novo' no início da lista.

//essa função coloca um novo ítem (nó) no início de uma lista ligada (linked list)
void	ft_lstadd_front(t_list **lst, t_list *new) // recebe a lista e novo nó a ser adicionado
{
	if (!lst || !new) // se a lista ou o ítem (nó) formem falsos, isto é, não existirem
		return ; //apenas retornamos, pois não temos mais nada para fazer aqui :)
	new->next = *lst; //o objeto (variável membro) 'next' do nó new vai receber o endereço da lista
	*lst = new; // o ponteiro da lista passa a apontar o new, que agora é o novo
	// primeiro elemento (nó) da lista
}
