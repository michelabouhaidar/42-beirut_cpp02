/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 19:52:08 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/22 19:54:10 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <ostream>

class Fixed
{
	private:
		int raw_;
		static const int fractBits = 8;
	public:
		Fixed();
		Fixed(const Fixed& obj);
		Fixed& operator=(const Fixed& obj);
		~Fixed();
		int getRawBits() const;
		void setRawBits(int const raw);

		Fixed(const int raw);
		Fixed(const float raw);
		float toFloat() const;
		int toInt() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif