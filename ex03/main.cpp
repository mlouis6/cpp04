/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:55:15 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/05 12:42:21 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include <iostream>

int main()
{

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(0);
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Ice());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("lala");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    Character* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->use(4, *bob);

    std::cout << "bobby" << std::endl;
    Character bobby;
    bob->equip(src->createMateria("cure"));
    bobby = *bob;
    bob->equip(src->createMateria("ice"));
    std::cout << "bob (cure, ice)" << std::endl;
    bob->use(0, *me);
    bob->use(1, *me);
    std::cout << "bobby (cure, nothing)" << std::endl;
    bobby.use(0, *me);
    bobby.use(1, *me);
    bobby.equip(src->createMateria("cure"));
    std::cout << "bobby (cure, cure, nothing)" << std::endl;
    bobby.use(0, *me);
    bobby.use(1, *me);
    bobby.use(2, *me);

    bob->unequip(10);
    bob->unequip(0);
    bob->unequip(1);
    bob->unequip(2);
    bob->unequip(-2);
    
    std::cout << "bob (nothing)" << std::endl;
    bob->use(1, *me);

    bob->equip(src->createMateria("cure"));
    bob->equip(src->createMateria("cure"));
    bob->equip(src->createMateria("ice"));
    bob->equip(src->createMateria("cure"));
    bob->equip(src->createMateria("ice"));
    std::cout << "bob (cure, cure, ice, cure)" << std::endl;
    for (int i = 0 ; i < 4 ; ++i)
        bob->use(i, *me);
    std::cout << "bobby (cure, cure, nothing, nothing)" << std::endl;
    for (int i = 0 ; i < 4 ; ++i)
        bobby.use(i, *me);

    for(int i = 0 ; i < 101 ; ++i)
    {
        bob->unequip(i % 4);
        if (i % 4 == 0)
        {
            for (int j = 0 ; j < 4 ; ++j)
            {
                bob->equip(src->createMateria("cure"));
            }
        }
    }
    ICharacter *who = new Character();
    who->equip(src->createMateria("cure"));
    std::cout << "(cure, cure, nothing, nothing, cure)" << std::endl;
    bob->use(0, *who);
    who->use(0, *who);
    who->use(1, *who);
    who->equip(0);
    who->use(1, *who);
    who->equip(Character::getFromFloor(3));
    who->use(1, *who);

    delete who;
    delete bob;
    delete me;
    delete src;
    Character::wipeFloor();

    return (0);
}
