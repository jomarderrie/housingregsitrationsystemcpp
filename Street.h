//
// Created by kimjongun on 25-3-2021.
//

#ifndef HOUSINGREGISTRATIONSYSTEM_STREET_H
#define HOUSINGREGISTRATIONSYSTEM_STREET_H


#include <vector>
#include <memory>
#include "House.h"
#include "ApartmentBuilding.h"

class Street {
 int id;
std::vector<std::shared_ptr<House>> houses;
    std::vector<std::shared_ptr<ApartmentBuilding>> apartmentBuildings;
public:
    void addHouse(std::shared_ptr<House> sharedPtr);
    void addApartmentBuilding(std::shared_ptr<ApartmentBuilding> sharedPtr);
    unsigned int nextId();

    unsigned int getId() const;

    std::shared_ptr<House> getHouse(int id) const;
    std::shared_ptr<ApartmentBuilding> getApartmentBuilding(int id) const;
    void const printEverything(std::ostream &out) const;
    int const totalAmountOfPeople() const;

    void readFamiliesFromFile(std::string file, std::shared_ptr<ApartmentBuilding> apartmentBuilding);
};


#endif //HOUSINGREGISTRATIONSYSTEM_STREET_H
