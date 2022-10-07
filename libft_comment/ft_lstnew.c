/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:52:39 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 14:13:17 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//descrição da função nas diretrizes da tarefa:
//Aloca (com malloc(3)) e devolve um novo nó. A variável membro 'content', conteúdo,
// é inicializada com o valor do parâmetro 'content'. A variável 'next' é inicializado em NULL.

//essa função cria malloca e adiciona um novo 1o item na lista
t_list	*ft_lstnew(void *content)
{
	t_list	*new; //criamos uma nova lista
	
	new = (t_list*) malloc(sizeof(t_list)); //nossa lista é mallocada
	new->content = content; // o objeto (variável membro) 'content' recebe o valor de conteúdo passado como parâmetro
	new->next = NULL; // objeto (variável membro) 'next' recebe null, pois ainda não aponta para nenum outro nó
	return (new); // retornamos nosso novo nó
}
