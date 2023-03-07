/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:20:31 by mfusil            #+#    #+#             */
/*   Updated: 2023/03/07 18:16:50 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

/**
 * possible en c++ de déclarer une fonction dans une classe (classe = grossierement structure)
 * On appelle ca fonction membre
 * Le C++ ment : un argument est tjrs min envoyé, même quand on en envoie pas, c'est un pointeur sur l'instance courante et utilisable
 * Variable dans une classe = attribut
 * struct meme fonctionnement qu'une classe
 * difference : struct a par defaut une classe public et une classe par defaut une classe privee
 **/

//  test qui compile pas -> juste pour montrer comment utiliser une struct en cpp

struct Sample 
{	
	int foo

	Sample( void );
	~Sample( void );

	void	bar( void ) const;
};

#endif