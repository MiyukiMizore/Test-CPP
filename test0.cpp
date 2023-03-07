/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test0.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:48:59 by mfusil            #+#    #+#             */
/*   Updated: 2023/03/07 15:04:16 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * namespace c un sac en gros : tout ce qui dedans reste dedans 
 **/

namespace Chibre 
{
	int gl_var = 10;
	int f(void) {return 6; }
}

int main(void)
{
	printf("gl_var: 		[%d]\n", Chibre::gl_var);
	printf("gl_var: 		[%d]\n", Chibre::f());

	return (0);
}