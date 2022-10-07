/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:59:02 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 13:50:15 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//descrição da função nas diretrizes da tarefa:
//Acrescenta o nó "novo" no final da lista

//esta função adiciona um ítem (nó) ao fim de uma lista ligada (linked list)
void	ft_lstadd_back(t_list **lst, t_list *new) //recebe a lista que receberá o novo elemento, e o novo elemento
{
	t_list	*i; /* variável auxiliar para percorrer a lista */

	if (!new) // se nó que eu for add não existe, não tenho nd pra fazer, então, apenas return;
		return;
	if (*lst == NULL)// se *lst for NULL, a cabeça da lista tá vazia, ou seja, a lista tá vazia :)
	{
		*lst = new; // se a lista tá vazia ela já recebe o new como 1o item (nó) da lista
		return;	// já retorna, por que não tem mais o que fazer aqui
	}
	i = ft_lstlast(*lst); // caso a lista já esteja ocupada, 
	// usamos a função ft_lstlast para encontrarmos o último ítem (nó) da lista
	i->next = new; //o ponteiro agora aponta pro novo item (nó) da lista
	// agora o new é o novo último ítem ou nó.
}
