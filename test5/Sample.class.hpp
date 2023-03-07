/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:20:31 by mfusil            #+#    #+#             */
/*   Updated: 2023/03/07 17:29:40 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

/**
 * possible en c++ de déclarer une fonction dans une classe (classe = grossierement structure)
 * On appelle ca fonction membre
 * Le C++ ment : un argument est tjrs min envoyé, même quand on en envoie pas, c'est un pointeur sur l'instance courante et utilisable
 * Variable dans une classe = attribut
 **/

class Sample 
{	
	public:
	
		char	a1;
		int		a2;
		float	a3;

		Sample( char p1, int p2, float p3 );
		~Sample( void );
};

#endif