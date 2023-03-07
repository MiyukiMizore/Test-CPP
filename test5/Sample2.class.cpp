/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:07:41 by mfusil            #+#    #+#             */
/*   Updated: 2023/03/07 17:16:09 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2.class.hpp"

/**
 * Constructor -> Sample : classe instencié(crée ?) donc constructor appelé
 * Destructor -> ~Sample : quand la classe va être détruite (sortie du main), destructor appelé
 * Constructor et Destructor ont pas de type de retour (un void en gros)
 * Plus interessant d'initialiser tout les attributs dans le constructeur
 * this = pointeur donc fleche
 * a1(p1), a2(p2), a3(p3) -> permet d'initaliser les attributs depuis le prototype
**/

Sample2::Sample2( char p1, int p2, float p3 ) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructor called" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;
	std::cout << "--------------------------------------" << std::endl;
}

Sample2::~Sample2( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}