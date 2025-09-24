/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 19:52:08 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/09/24 12:05:49 by mabou-ha         ###   ########.fr       */
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

		bool operator>(const Fixed& obj) const;
		bool operator<(const Fixed& obj) const;
		bool operator>=(const Fixed& obj) const;
		bool operator<=(const Fixed& obj) const;
		bool operator==(const Fixed& obj) const;
		bool operator!=(const Fixed& obj) const;
		Fixed operator+(const Fixed& obj) const;
		Fixed operator-(const Fixed& obj) const;
		Fixed operator*(const Fixed& obj) const;
		Fixed operator/(const Fixed& obj) const;
		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif