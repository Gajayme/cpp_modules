/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:28:48 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/03 17:40:58 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):name(name), weapon(weapon){
	//std::cout<<name<<" is created"<<std::endl;
}

HumanA::~HumanA(){
	//std::cout<<name<<" killed"<<std::endl;
}

void HumanA::attack(){
	std::cout<<name<<" attacks with their "<<weapon.getType()<<std::endl;
}
