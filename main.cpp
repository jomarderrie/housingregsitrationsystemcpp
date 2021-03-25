#include <iostream>
#include "Street.h"

int main() {
    /**
     * Possible errors are:
     *  - Adding more families to an apartment building than available apartments
     *  - Errors reading the input file (In this case the file is ok, but maybe in the future we will use a wrong file)
     *
     *  The same family name may be at different houses, this is not an error!
     */
     try{
     Street street;
         //TODO: Create an instance of the Street class (only one street is created)
         //TODO: Add the following house
         //Family: van Kleunen, residents: 3
        street.addHouse(std::make_shared<House>("van Kleunen", 3,1));

        auto apartmentBuilding = std::make_shared<ApartmentBuilding>(2,2);
         //TODO; Add an apartment building with total 2 apartments and add the following families:
         street.addApartmentBuilding(apartmentBuilding);
         //Suffix: a, Name: Pietersen, residents: 1
         apartmentBuilding->addApartment(std::make_shared<Apartment>("Pietersen",1,"a"));

         //Suffix: b, Name: van Buren, residents: 2
         apartmentBuilding->addApartment(std::make_shared<Apartment>("van Buren",2,"b"));

         //TODO: Add the following house
         //Family: van den Berg, residents: 2
         street.addHouse(std::make_shared<House>("van den Berg", 2,3));

         //TODO; Add an apartment building with total 3 apartments
         auto apartmentBuilding2 = std::make_shared<ApartmentBuilding>(4,
                                                                       3);
         street.addApartmentBuilding(apartmentBuilding2);
         //TODO: Read the families who live here from the file "input.txt"
         //Format: [suffix] [family] [residents]
        street.readFamiliesFromFile("input.txt", apartmentBuilding2);
         //TODO: tell the Street class to print out all the houses and apartments
         street.printEverything(std::cout);
         //TODO: Release any memory you have allocated
     } catch (std::exception &exception) {
         std::cerr << "Oops! Something went wrong." << std::endl
                   << exception.what() << std::endl;
     }

    return 0;
}
enum suffix {a, b, c, d, e, f};