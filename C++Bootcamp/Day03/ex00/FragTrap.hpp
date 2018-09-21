/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <fthwala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 09:01:54 by fthwala           #+#    #+#             */
/*   Updated: 2018/06/08 13:45:43 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FREGTRAP_H
# define FREGTRAP_H

#include <iostream>

class FragTrap{
    public:
        FragTrap();
        FragTrap( std::string & name );
        FragTrap &  operator=( FragTrap const & rhs );
        ~FragTrap( void );

        int     getHitPoints( void );
        int     getMaxHitPoints( void );
        int     getEnergyPoints( void );
        int     getMaxEnergyPoints( void );
        int     getLevel( void );
        int     getMeleeAttackDamage( void );
        int     getRangedAttackDamage( void );
        int     getArmorDamageReduction( void );
        std::string      getName( void );
        void    setRawBits( int const raw );
        void    rangedAttack(std::string const & target);
        void    meleeAttack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        FragTrap    vaulthunter_dot_exe(std::string const & target);

    private:
        int     HitPoints;
        int     MaxHitPoints;
        int     EnergyPoints;
        int     MaxEnergyPoints;
        int     Level;
        int     MeleeAttackDamage;
        int     RangedAttackDamage;
        int     ArmorDamageReduction;
        std::string     Name;
        //You will also give it a few functions to make it more life-like :
        
};

#endif

// void          vaulthunter_dot_exe(std::string const &target);
// void          memeAttack(std::string const &target);
// void          fartAttack(std::string const &target);
// void          weedAttack(std::string const &target);
// void          troloAttack(std::string const &target);
// void          laserAttack(std::string const &target);
