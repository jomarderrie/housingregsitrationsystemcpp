
//
// Created by kimjongun on 25-3-2021.
//

#ifndef HOUSINGREGISTRATIONSYSTEM_BUILDING_H
#define HOUSINGREGISTRATIONSYSTEM_BUILDING_H


#include <string>

class Building {
    std::string suffix;
    std::string familyName;
    int amountOfPeople;

public:
    Building(const std::string &suffix, const std::string &familyName, int amountOfPeople);

    const std::string &getSuffix() const;

    const std::string &getFamilyName() const;

    int getAmountOfPeople() const;

};


#endif //HOUSINGREGISTRATIONSYSTEM_BUILDING_H
