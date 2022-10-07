/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:06:11 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 13:43:02 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//descrição da função nas diretrizes da tarefa:
//Itera a lista 'lst' e aplica a função "f" sobre o conteúdo de cada nó. Cria uma nova
// lista resultante das sucessivas aplicações da função 'f'. A função 'del' é usada
// para apagar o conteúdo de um nó, se necessário.

//essa função cria uma nova lista com o conteúdo da lista original iterado pela função f
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list  *lst_new; // cria-se uma nova lista, que retornaremos depois de trabalhar nela
	t_list  *aux; // criamos uma struct que vai receber cada novo ítem

	lst_new = NULL; // inicializamos a nossa lista
	if (!lst) // se a lista original estiver vazia, não teremos com o que trabalhar
		return (NULL); // então retornamos null
	while (lst) //enquanto a lista não acabar
	{
		aux = ft_lstnew(f(lst->content)); // o aux recebe a funcão que 
		// vai mallocar e receber a função iterada sobre o ítem em questão
		// da lst e um ponteiro nulo (que pode ser usado pra ligar no próximo ítem)
		if (!aux)
			ft_lstclear(&aux, del); //se a iteração ou a malocação deu errado usamos limpamos o
			// conteúdo de aux, usando a função del (para isso aplicamos a função ft_lstclear)
		lst = lst->next; // nosso ponteiro recebe o endereço para o próximo ítem da lista
		ft_lstadd_back(&lst_new, aux); // usamos a função ft_lstadd_back para adicionar um nó ao
		//fim da nossa nova lista, e o que estamos adicionando está no nó aux
	}
	return (lst_new); // retornamos a nossa nova lista ligada
}
