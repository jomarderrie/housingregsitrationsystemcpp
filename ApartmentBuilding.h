//
// Created by kimjongun on 25-3-2021.
//

#ifndef HOUSINGREGISTRATIONSYSTEM_APARTMENTBUILDING_H
#define HOUSINGREGISTRATIONSYSTEM_APARTMENTBUILDING_H


#include <memory>
#include <vector>
#include "Apartment.h"

class ApartmentBuilding {
    int uniqueNummer;
    int totalAmountOfApartments;
    std::vector<std::shared_ptr<Apartment>> apartments;

public:
    ApartmentBuilding(int uniqueNummer, int totalAmountOfApartments);

    int getUniqueNummer() const;

    int getTotalAmountOfApartments() const;

    void addApartment(std::shared_ptr<Apartment> sharedPtr);

    const std::vector<std::shared_ptr<Apartment>> &getApartments() const;
    virtual void print_on(std::ostream &out) const;

};


#endif //HOUSINGREGISTRATIONSYSTEM_APARTMENTBUILDING_H
