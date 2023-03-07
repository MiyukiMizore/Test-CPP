/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:20:31 by mfusil            #+#    #+#             */
/*   Updated: 2023/03/07 18:57:58 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

/**
 * possible en c++ de déclarer une fonction dans une classe (classe = grossierement structure)
 * On appelle ca fonction membre
 * Le C++ ment : un argument est tjrs min envoyé, même quand on en envoie pas, c'est un pointeur sur l'instance courante et utilisable
 * Variable dans une classe = attribut
 * public et private permettent de controler l'encapsulation des membres de la classe
 * public -> possible d'acceder aux membres depuis l'exterieur et l'interieur de la classe
 * private -> possible d'acceder aux membres seulement depuis l'interieur de la classe
 **/


class Sample 
{	
	public:
	
		Sample( void );
		~Sample( void );

		int		getFoo( void ) const;
		void	setFoo( int v );

	private:
	
		int		_foo;
};

#endif
