//
// Created by kimjongun on 25-3-2021.
//

#include <iostream>
#include "ApartmentBuilding.h"

ApartmentBuilding::ApartmentBuilding(int uniqueNummer, int totalAmountOfApartments) : uniqueNummer(uniqueNummer),
                                                                                      totalAmountOfApartments(
                                                                                              totalAmountOfApartments) {}

int ApartmentBuilding::getUniqueNummer() const {
    return uniqueNummer;
}

int ApartmentBuilding::getTotalAmountOfApartments() const {
    return totalAmountOfApartments;
}

void ApartmentBuilding::addApartment(std::shared_ptr<Apartment> apartment) {
    for (const auto &m:apartments) {
        if (m->getSuffix() == apartment->getSuffix()) {
            throw std::runtime_error("suffix already exist");
        }
    }
    this->apartments.push_back(apartment);
}

const std::vector<std::shared_ptr<Apartment>> &ApartmentBuilding::getApartments() const {
    return apartments;
}

void ApartmentBuilding::print_on(std::ostream &out) const {
    std::cout << "is an apartment building with " << getTotalAmountOfApartments()  << "apartments: " << std::endl;
    for (const auto &m:getApartments()) {
        std::cout << "\t " << m->getSuffix() << ") is where" << m->getFamilyName() << " lives with " << m->getAmountOfPeople() << " Persons " << std::endl;
    }
    return;
}
