/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:19:50 by mfusil            #+#    #+#             */
/*   Updated: 2023/03/07 17:29:26 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

/**
 * Constructor -> Sample : classe instencié(crée ?) donc constructor appelé
 * Destructor -> ~Sample : quand la classe va être détruite (sortie du main), destructor appelé
 * Constructor et Destructor ont pas de type de retour (un void en gros)
 * Plus interessant d'initialiser tout les attributs dans le constructeur
 * this = pointeur donc fleche
**/

Sample::Sample( char p1, int p2, float p3 )
{
	std::cout << "Constructor called" << std::endl;

	this->a1 = p1;
	std::cout << "this->a1 : " << this->a1 << std::endl;

	this->a2 = p2;
	std::cout << "this->a2 : " << this->a2 << std::endl;

	this->a3 = p3;
	std::cout << "this->a3 : " << this->a3 << std::endl;

	std::cout << "--------------------------------------" << std::endl;

	return ;
}

Sample::~Sample( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
