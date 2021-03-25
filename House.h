//
// Created by kimjongun on 25-3-2021.
//

#ifndef HOUSINGREGISTRATIONSYSTEM_HOUSE_H
#define HOUSINGREGISTRATIONSYSTEM_HOUSE_H


#include <string>

class House {
    std::string familyName;
    int amountOfPeople;
    int uniqueInt;
public:
    House(const std::string &familyName, int amountOfPeople, int uniqueInt);

    const std::string &getFamilyName() const;

    int getAmountOfPeople() const;

    int getUniqueInt() const;

    virtual void print_on(std::ostream &out) const;

};


#endif //HOUSINGREGISTRATIONSYSTEM_HOUSE_H
