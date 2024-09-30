//needed header files + libraries
#ifndef DESSERT_HPP
#define DESSERT_HPP
#include "Dish.hpp"

/*
 dessert.hpp file
 Michael Romero
 dessert.hpp intializes the dessert class

 The class has methods/functions to view and manipulate dishes, including:
 1. Name
 2. Ingredients 
 3. Preparation Time
 4. Price 
 5. Cuisine
 6. Flavor 
 7. Sweetness
 8. Has nuts or not
*/

class Dessert: public Dish{ 
    public:
    enum  FlavorProfile { SWEET, BITTER, SOUR, SALTY, UMAMI };
    Dessert(); //default class constructor
    //parameters
    /*
    1. Name
    2. Ingredients 
    3. Preparation Time
    4. Price 
    5. Cuisine
    6. Flavor 
    7. Sweetness
    8. Has nuts or not
    */

    Dessert(const std :: string &name, const std :: vector<std :: string> &ingredients={}, int prep_time=0,
    double price=0.0, CuisineType cuisine_type=CuisineType::OTHER,
    FlavorProfile flavor_profile=FlavorProfile :: SWEET,int sweetness_level=0,bool contains_nuts=false); //parameterized constructor

    void setFlavorProfile(const FlavorProfile &flavor_profile); //method that sets flavor profile
    
    FlavorProfile getFlavorProfile() const; //initalizing flavorprofile
    
    void setSweetnessLevel(const int &sweetness_level); //non-return method that can set the sweetness level, to the private member

    int getSweetnessLevel() const; // returns int value of the sweetness level
    
    void setContainsNuts(const bool contains_nuts); //sets bool value if it has nuts or not

    bool containsNuts() const; // returns the value if it has nuts or not

    private:
    int sweetness_level_;
    bool contains_nuts_;
    FlavorProfile flavor_profile_;
};
#endif