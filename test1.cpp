/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:50:29 by mfusil            #+#    #+#             */
/*   Updated: 2023/03/07 15:05:15 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/**
 * en gros la std::cout je dirige dans la sortie "hello world !" puis j'affiche un retour à la ligne (std::endl)
 * cin = entrée | cout = sortie
 * pour utiliser cin et cout -> bibliotheque iostream
 * std::cin >> buff -> en gros je tape un mot qu'il va stocker puis après il affiche avec la ligne d'après
 **/

int main(void)
{
	char	buff[512];

	std::cout << "Hello World !" << std::endl;

	std::cout << "Input a word : ";
	std::cin >> buff;
	std::cout << "You entered: [" << buff << "]" << std::endl;

	return (0);
}