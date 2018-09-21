/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <fthwala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 10:11:50 by fthwala           #+#    #+#             */
/*   Updated: 2018/06/13 10:44:54 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar(){
    return;
}

Scalar::Scalar(Scalar const & src){
    *this = src;
    return;
}

Scalar &    Scalar::oparator=(Scalar const rhs){
    this->Toget = static_cast<void>rhs.Toget;
    return *this; 
}

Scalar::~Scalar(){
    return;
}