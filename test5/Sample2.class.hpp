/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:09:17 by mfusil            #+#    #+#             */
/*   Updated: 2023/03/07 17:09:53 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE2_CLASS_H
# define SAMPLE2_CLASS_H

/**
 * possible en c++ de déclarer une fonction dans une classe (classe = grossierement structure)
 * On appelle ca fonction membre
 * Le C++ ment : un argument est tjrs min envoyé, même quand on en envoie pas, c'est un pointeur sur l'instance courante et utilisable
 * Variable dans une classe = attribut
 **/

class Sample2
{	
	public:
	
		char	a1;
		int		a2;
		float	a3;

		Sample2( char p1, int p2, float p3 );
		~Sample2( void );
};

#endif