/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:21:03 by gajayme           #+#    #+#             */
/*   Updated: 2022/06/02 14:37:56 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(): name("Default"){

}

Zombie::Zombie(std::string name): name(name){

}

Zombie::~Zombie(){
	std::cout<<name<<" is dead... again"<<std::endl;
}

void Zombie::announce(){
	std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void Zombie::set_name(std::string name){
	this->name = name;
}
