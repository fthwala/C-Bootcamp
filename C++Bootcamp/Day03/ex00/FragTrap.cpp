/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <fthwala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 09:00:38 by fthwala           #+#    #+#             */
/*   Updated: 2018/06/07 18:38:40 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "FragTrap.hpp"

// int     FragTrap::HitPoints = 100;
// int     FragTrap::MaxHitPoints = 100;
// int     FragTrap::EnergyPoints = 100;
// int     FragTrap::MaxEnergyPoints = 100;
// int     FragTrap::Level = 1;
// int     FragTrap::MeleeAttackDamage = 30;
// int     FragTrap::RangedAttackDamage = 20;
// int     FragTrap::ArmorDamageReduction = 5;

FragTrap::FragTrap(){
    return;
}

FragTrap::FragTrap( std::string & name ){
    this->Name = name;
    this->HitPoints = 100;
    this->MaxHitPoints = 100;
    this->EnergyPoints = 100;
    this->MaxEnergyPoints = 100;
    this->Level = 1;
    this->MeleeAttackDamage = 30;
    this->RangedAttackDamage = 20;
    this->ArmorDamageReduction = 5; 
    return;
}

~FragTrap( void ){
    return;
}

FragTrap    vaulthunter_dot_exe(std::string const & target){

}

FragTrap    FragTrap::FragTrap &  operator=( FragTrap const & rhs ){
    this->Name = rhs.name;
    this->HitPoints = rhs.HitPoints;
    this->MaxHitPoints = rhs.MaxHitPoints;
    this->EnergyPoints = rhs.EnergyPoints;
    this->MaxEnergyPoints = rhs.MaxEnergyPoints;
    this->Level = rhs.Level;
    this->MeleeAttackDamage = rhs.MeleeAttackDamage;
    this->RangedAttackDamage = rhs.RangedAttackDamage;
    this->ArmorDamageReduction = rhs.ArmorDamageReduction; 
	return *this;
}

int     FragTrap::getHitPoints( void ){
    return this->HitPoints;

}

int     FragTrap::getMaxHitPoints( void ){
    return this->MaxHitPoints;

}

int     FragTrap::getEnergyPoints( void ){
    return this->EnergyPoints;

}

int     FragTrap::getMaxEnergyPoints( void ){
    return this->MaxEnergyPoints;

}

int     FragTrap::getLevel( void ){

    return this->Name;

}

int     FragTrap::getMeleeAttackDamage( void ){
    return this->Name;

}

int     FragTrap::getRangedAttackDamage( void ){
    return this->Name;

}

int     getArmorDamageReduction( void ){
    return this->Name;

}

std::string     FragTrap::getName( void ){
    return this->Name;

}

void    FragTrap::setRawBits( std::string raw ){
    this->Name = raw;
}

void    FragTrap::rangedAttack(std::string const & target){
    std::cout << "FR4G-TP " << this->_name << " attacks " << target \
              << " at range, causing " << this->RangedAttackDamage \
              << " points of damage !" << std::endl;
    return ;
}

void    FragTrap::meleeAttack(std::string const & target){
    std::cout << "FR4G-TP " << this->_name << " attacks " << target \
              << " at range, causing " << this->RangedAttackDamage \
              << " points of damage !" << std::endl;
    return ;
}

// void    FragTrap::takeDamage(unsigned int amount){
//     std::cout << "FR4G-TP " << this->_name << " attacks " << target \
//               << " at range, causing " << this->RangedAttackDamage \
//               << " points of damage !" << std::endl;
//     return ;
// }

// void    FragTrap::beRepaired(unsigned int amount){
//     std::cout << "FR4G-TP " << this->_name << " attacks " << target \
//               << " at range, causing " << this->RangedAttackDamage \
//               << " points of damage !" << std::endl;
//     return ;
// }

void    FragTrap::takeDamage(unsigned int amount)
{
    unsigned int    damage;

    damage = amount - this->ArmourDamageReductionPoints;
    if (damage > this->HitPoints)
    {
        this->HitPoints = 0;
        std::cout << this->Name << ": LOL I'm ded already... X_X" << std::endl;
    }
    else
    {
        this->HitPoints -= damage;
        std::cout << this->Name << ": I'm still alive. :D" << std::endl;
        std::cout << "Armour reduction: " << this->ArmourDamageReduction\
                  << std::endl;
        std::cout << "Damage taken: " << damage << std::endl;
        std::cout << "HP left: " << this->HitPoints << " / " \
                  << this->MaxHitPoints << std::endl;
    }
    return ;
}

void    FragTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints < amount)
    {
        std::cout << this->_name << ": Not enough energy... :(" << std::endl;
    }
    else
    {
        this->EnergyPoints -= amount;
        this->HitPoints = amount + this->_hitPoints;
        std::cout << this->Name << ": I'm healing myself... ;)" << std::endl;
        std::cout << "HP points: " << this->HitPoints << std::endl;
    }
    std::cout << "Energy points left: " << this->EnergyPoints << std::endl;
    return ;
}



