//
// Created by kimjongun on 25-3-2021.
//

#ifndef HOUSINGREGISTRATIONSYSTEM_APARTMENT_H
#define HOUSINGREGISTRATIONSYSTEM_APARTMENT_H


#include <string>

class Apartment {
    std::string familyName;
    int amountOfPeople;
    std::string suffix;
public:
    Apartment(const std::string &familyName, int amountOfPeople, const std::string &suffix);

    const std::string &getFamilyName() const;

    int getAmountOfPeople() const;

    const std::string &getSuffix() const;
};


#endif //HOUSINGREGISTRATIONSYSTEM_APARTMENT_H
