/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:19:50 by mfusil            #+#    #+#             */
/*   Updated: 2023/03/07 16:57:13 by mfusil           ###   ########.fr       */
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

Sample::Sample( void )
{
	std::cout << "Constructor called" << std::endl;
	this->foo = 42;

	std::cout << "this->foo : " << this->foo << std::endl;

	this->bar();
	return ;
}

Sample::~Sample( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample::bar( void )
{
	std::cout << "Member function bar called" << std::endl;
	return ;
}