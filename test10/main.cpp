/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:34:59 by mfusil            #+#    #+#             */
/*   Updated: 2023/03/07 18:55:48 by mfusil           ###   ########.fr       */
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
	Sample var( 42 );
	Sample var2( 42 );

	if (&var == &var)
		std::cout << "var and var 2 are physically equal" << std::endl;
	else
		std::cout << "var and var 2 are not physically equal" << std::endl;	
	
	if (&var == &var2)
		std::cout << "var and var 2 are physically equal" << std::endl;
	else
		std::cout << "var and var 2 are not physically equal" << std::endl;

	if (var.compare(&var) == 0)
		std::cout << "var and var 2 are structurally equal" << std::endl;
	else
		std::cout << "var and var 2 are not structurally equal" << std::endl;

	if (var.compare(&var2) == 0)
		std::cout << "var and var 2 are structurally equal" << std::endl;
	else
		std::cout << "var and var 2 are not structurally equal" << std::endl;

	return (0);
}