/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:34:59 by mfusil            #+#    #+#             */
/*   Updated: 2023/03/07 17:14:40 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"
#include "Sample2.class.hpp"

/**
 * Sample instance = type + nom variable (comme si je declarais une variable en C)
 * var est une instance de la class Sample
 * Sample var role
 * 1- Declaration var
 * 2- Execution code Sample.class.cpp
 **/


int main()
{
	Sample var('a', 42, 4.4);
	Sample2 var2('b', 12, 3.41);

	return (0);
}