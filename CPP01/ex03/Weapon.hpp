/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:33:04 by jbouyer           #+#    #+#             */
/*   Updated: 2022/09/29 17:39:55 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Weapon
{
	private :
			std::string _type; 
	public:
			Weapon();
			~Weapon();
			std::string	getType(std::string type);
			std::string	setType(std::sttring type);
};