/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 02:20:07 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/24 12:02:24 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void) {
    Fixed a;
    Fixed const b( Fixed(5.05f) * Fixed(2) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;  // pre-increment
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;  // post-increment
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    return 0;
}



