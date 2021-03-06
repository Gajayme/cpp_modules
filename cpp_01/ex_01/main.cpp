/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:31:58 by gajayme           #+#    #+#             */
/*   Updated: 2022/06/02 14:46:00 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){

	Zombie *a;
	Zombie *b;

	int n = 10;
	a = zombieHorde(n, "Kristopher");

	for (int i = 0; i != n; ++i){
		a[i].announce();
	}

	n = 5;
	b = zombieHorde (n, "Jude");

	for (int i = 0; i != n; ++i){
		a[i].announce();
	}

	delete []b;
	delete []a;
	return (0);
}
