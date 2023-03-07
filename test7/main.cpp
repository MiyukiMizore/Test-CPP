/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:34:59 by mfusil            #+#    #+#             */
/*   Updated: 2023/03/07 18:06:54 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

/**
 * Sample instance = type + nom variable (comme si je declarais une variable en C)
 * var est une instance de la class Sample
 * Sample var role
 * 1- Declaration var
 * 2- Execution code Sample.class.cpp
 **/


int main()
{
	Sample var;

	var.publicFoo = 42;
	std::cout << "var.publicFoo : " << var.publicFoo << std::endl;
	//pas le droit ici d'utiliser le private

	var.publicBar();
	return (0);
}