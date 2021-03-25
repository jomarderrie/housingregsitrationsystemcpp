//
// Created by kimjongun on 25-3-2021.
//

#include <fstream>
#include <iostream>
#include "Street.h"


unsigned int Street::nextId() {
    return id++;
}

void Street::addHouse(std::shared_ptr<House> house) {
    for (const auto &m:houses) {
        if (m->getUniqueInt() == house->getUniqueInt()) {
            throw std::runtime_error("Id already exist");
        }
    }
    houses.push_back(house);
}

void Street::addApartmentBuilding(std::shared_ptr<ApartmentBuilding> apartmentBuilding) {
    for (const auto &m:apartmentBuildings) {
        if (m->getUniqueNummer() == apartmentBuilding->getUniqueNummer()) {
            throw std::runtime_error("Id already exist");
        }
    }
    apartmentBuildings.push_back(apartmentBuilding);
}

void Street::readFamiliesFromFile(std::string file,std::shared_ptr<ApartmentBuilding> apartmentBuilding ) {
    std::ifstream input(file);
    while (true) {
        std::string suffix;
        std::string familyName;
        int maxRecidents;

        input >> suffix >> familyName >> maxRecidents;
        apartmentBuilding->addApartment(std::make_shared<Apartment>(familyName, maxRecidents, suffix));
        if (input.eof()) {
            return;
        }
        if (input.fail()) {
            throw std::runtime_error("Inputfailed");
        }
    }

}

void const Street::printEverything(std::ostream &out) const {
    std::cout << "This street has : " << totalAmountOfPeople() << " Residents"<< std::endl;
    for (int i = 0; i < 12; ++i) {

        auto house = getHouse(i);
        auto apartmentBuilding = getApartmentBuilding(i);

        if (house != nullptr) {
            house->print_on(out);
        } else if (apartmentBuilding != nullptr) {
            apartmentBuilding->print_on(out);
        }

    }
    return;
}


int const Street::totalAmountOfPeople() const {
    int totalPeople = 0;
    for (const auto &m:houses) {
        totalPeople += m->getAmountOfPeople();
    }

    for (const auto &m:apartmentBuildings) {
        for (const auto &z:m->getApartments()) {
            totalPeople += z->getAmountOfPeople();
        }
    }
    if (totalPeople == 0) {
        throw std::runtime_error("Inputfailed");
    }
    return totalPeople;
}

unsigned int Street::getId() const {
    return id;
}

std::shared_ptr<House> Street::getHouse(int id) const {
    for (const auto &m:houses) {
        if (id == m->getUniqueInt()) {

            return m;
        }
    }
    return nullptr;
}

std::shared_ptr<ApartmentBuilding> Street::getApartmentBuilding(int id) const {
    for (const auto &m:apartmentBuildings) {
        if (id == m->getUniqueNummer()) {

            return m;
        }
    }
    return nullptr;
}

