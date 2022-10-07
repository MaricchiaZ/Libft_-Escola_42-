/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 21:47:51 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 15:32:33 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//man memmove:
// A função memmove() copia n bytes da área de memória src para área de memória dest. 
// As áreas de memória podem se sobrepor: a cópia leva como se os bytes em src fossem 
//primeiro copiados em um matriz temporária que não se sobrepõe a src ou dest, e os bytes 
//são então copiados da matriz temporária para dest. A função memmove() retorna um ponteiro para dest.

// essa função copia n bytes da memória src para a memória dest
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d; // criamos um ponteiro unsigned char d auxiliar para receber a dest
	const unsigned char	*temp; // criamos um ponteiro unsigned char + const temporário para receber a src
	size_t				i; // um índice í para percorrer as áreas de memória src e dest

	i = 0; // o índice comeca no zero
	d = (unsigned char *) dest; // d auxiliar recebe a dest já como unsigned char
	temp = (const unsigned char *) src; // temp recebe a src já como const unsigned char 
	if ((!d && !temp) || !n) // se d, ou temp estiverem vazias ou n for zero, não temos o que fazer
		return (dest); // então retormanos o ponteiro para dest, sem nenhuma modificação.
	if (d <= temp) // se o tamanho da d for maior ou igual ao tamanho da temp (que é cópia da dest)
	//podemos copiar do início ao fim, pois não haverá sobreposição
	{
		while (i < n) //enquanto o i (que começa no zero) for menor do que n
		{
			d[i] = temp[i]; // d[i] recebe o conteúdo da temp[i]
			i++; //seguimos para o próximo byte
		}
	}
	else // caso d seja menor que a temp
		ft_memcpy(dest, src, n); // usamos a memcpy que copia do fim ao começo (evitando assim a sobreposição)
	return (dest); // retornamos a dest já modificada
}
