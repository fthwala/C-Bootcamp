/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <fthwala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 10:11:29 by fthwala           #+#    #+#             */
/*   Updated: 2018/06/13 10:44:56 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Scalar {
    public:
        Scalar();
        Scalar(Scalar const & src);
        Scalar & oparator=(Scalar const & rhs);
        ~Scalar();

        int     ToInt(double num);
        double  ToDouble(double num);
        float   ToFloat(double num);
        char    ToChar(double num);
    private:
        Scalar Toget;
        
}

