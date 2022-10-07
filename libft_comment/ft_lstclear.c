/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:04:00 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 13:52:36 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//descrição da função nas diretrizes da tarefa:
//Deleta e liberta o nó dado e cada sucessor daquele nó, usando a função 'del'. e 
//livre(3). Finalmente, o ponteiro para a lista deve ser definido para NULL.

//essa função limpa e apaga uma lista a partir do ponteiro dado
void	ft_lstclear(t_list **lst, void (*del)(void*))
{	
	t_list	*temp; //variável temporária para armazenar o caminho pro próximo ítem da lista
	
	if (!lst) // se a lista estiver vazia, não temos o que fazer aqui, apenas return :)
		return; 
	while (*lst) 
	{
		temp = (*lst)->next; // guarda referência para o próximo elemento
		del((*lst)->content); // apaga o conteúdo do deste ítem (nó) usando a função del passada por parâmetro
		free (*lst); // limpa a memória alocada pra essa armazenagem
		*lst = temp; // o ítem (nó) recebe a info para o próximo ítem (nó)
	}
	*lst = NULL; // o ponteiro é zerado.
}
