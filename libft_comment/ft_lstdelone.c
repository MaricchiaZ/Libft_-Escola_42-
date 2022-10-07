/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:01:02 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 13:53:24 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//descrição da função nas diretrizes da tarefa:
//Toma como parâmetro um nó e libera memória do "content", ou conteúdo do nó usando a função 'del' 
//dada como um parâmetro e liberar o nó. A memória do "next" não deve ser liberada.

//esta função apaga apenas o conteúdo "content" do nó dado como parâmetro, e para apagar usa a 
//função del também passada por parâmetro
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst) // se a lista já está vazia, não temos o que fazer aqui, apenas return ;)
		return; 
	del(lst->content); // devemos deletar o objeto (variável membro) 'content' contido no nó passado
	free (lst); //agora damos free neste nó como pede as diretrizes
}
