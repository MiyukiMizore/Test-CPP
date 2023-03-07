/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:19:50 by mfusil            #+#    #+#             */
/*   Updated: 2023/03/07 18:57:34 by mfusil           ###   ########.fr       */
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
 * pi( f ), qd( 42 ) -> ici on initialise pas on assigne
 * 
 * void	Sample::bar( void ) const -> const ici ne modifira jamais l'instance courante 
 * en gros une fois ce const mis on pourra plus mettre des instructions du style this->pi = 14,4;
 * 
 * accesseurs : permet de connaitre la valeur d'un attribut et de pouvoir le changer
 * generalement une fonction get et set
**/

Sample::Sample( void)
{
	std::cout << "Constructor called" << std::endl;

	this->setFoo( 0 );
	std::cout << "this->getFoo : " << this->getFoo() << std::endl;

	return ;
}

Sample::~Sample( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Sample::getFoo( void ) const
{
	return (this->_foo);
}

void	Sample::setFoo( int v )
{
	if ( v >= 0)
		this->_foo = v; //en temps normal mettre message d'erreur ici

	return;
}
