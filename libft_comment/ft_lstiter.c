/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:05:08 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 13:55:04 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//descrição da função nas diretrizes da tarefa:
//Itera a lista 'lst' e aplica a função "f" sobre o conteúdo de cada nó.

//esta função passa por todos os nós de uma lista e itera a função f sobre os conteúdos dos nós
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst) // se a lista não existe, não temos o que fazer aqui, apenas return;
		return;
	while (lst->next != NULL) //enquanto não chegarmos no último ítem (nó) da lista
	{
		f(lst->content); // iteramos a função sobre a (variável membro) 'content' deste nó
		lst = lst->next; //aí o ponteiro anda pra para o próximo ítem
	}
	f(lst->content); //iteramos sonbre a (variável membro) 'content' do último nó e acabou :) seja feliz
}
