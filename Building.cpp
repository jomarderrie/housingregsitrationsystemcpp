//
// Created by kimjongun on 25-3-2021.
//

#include "Building.h"

Building::Building(const std::string &suffix, const std::string &familyName, int amountOfPeople) : suffix(suffix),
                                                                                                   familyName(
                                                                                                           familyName),
                                                                                                   amountOfPeople(
                                                                                                           amountOfPeople) {}

const std::string &Building::getSuffix() const {
    return suffix;
}

const std::string &Building::getFamilyName() const {
    return familyName;
}

int Building::getAmountOfPeople() const {
    return amountOfPeople;
}
