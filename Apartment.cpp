//
// Created by kimjongun on 25-3-2021.
//

#include "Apartment.h"


Apartment::Apartment(const std::string &familyName, int amountOfPeople, const std::string &suffix) : familyName(
        familyName), amountOfPeople(amountOfPeople), suffix(suffix) {}

const std::string &Apartment::getFamilyName() const {
    return familyName;
}

int Apartment::getAmountOfPeople() const {
    return amountOfPeople;
}

const std::string &Apartment::getSuffix() const {
    return suffix;
}
