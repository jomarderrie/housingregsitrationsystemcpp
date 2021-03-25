//
// Created by kimjongun on 25-3-2021.
//

#include <iostream>
#include "House.h"



const std::string &House::getFamilyName() const {
    return familyName;
}

int House::getAmountOfPeople() const {
    return amountOfPeople;
}

int House::getUniqueInt() const {
    return uniqueInt;
}

House::House(const std::string &familyName, int amountOfPeople, int uniqueInt) : familyName(familyName),
                                                                                 amountOfPeople(amountOfPeople),
                                                                                 uniqueInt(uniqueInt) {}

void House::print_on(std::ostream &out) const {
    std::cout << "is a house where family " << getFamilyName()  << "Lives with " << getAmountOfPeople() << "persons. "<< std::endl;
}


