/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:31:51 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 15:14:42 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//man memcpy:
// A função memcpy() copia n bytes da área de memória src para área de memória dest.  
// As áreas de memória não devem se sobrepor.

//essa função copia n bytes da memória src na memória dest
void	*ft_memcpy(void *dest, const void *src, int n)
{
	char		*d; //criamos um ponteiro auxiliar d para receber o dest
	const char	*s; //criamos um ponteiro auxiliar s para receber src

	d = dest; //d recebe dest
	s = src; //s recebe src
	n --; // já começamos tirando uma unidade do n por que ao compararmos n bytes vamos do byte 0 ao byte n-1;
	while (n) // enquanto n existir
	{
		d[n] = s[n]; // a posição d[n] recebe o conteúdo da posição s[n] (ao fazermos de trás para frente,
		// evitamos a sobreposição)
		n--; // n peder 1 unidade
	}
	return (dest); //retornamos dest já preenchida
}
