#include "Dessert.hpp" //importing header file 

/*
 dessert.cpp file
 Michael Romero
 dessert.cpp implements the dessert class

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
Dessert :: Dessert():Dish(), flavor_profile_(FlavorProfile :: SWEET),sweetness_level_(0),contains_nuts_(false){} //default construtor

   /*
     The parameters of the constructor: 
     name, name of the food
     ingredients, ingreds in the food
     prep_time, time to make the food
     price, cost of the food
     cuisine_type, food type
     flavor, flavor of the food type
     sweetness, sweetness of the food
     Has nuts or not Flag, if dessert has nuts or not
    */

Dessert::Dessert(const std :: string &name, const std :: vector<std :: string> &ingredients, int prep_time,
     double price, CuisineType cuisine_type,FlavorProfile flavor_profile,int sweetness_level,bool contains_nuts)
  : Dish(name, ingredients, prep_time, price, cuisine_type),flavor_profile_(flavor_profile),
   sweetness_level_(sweetness_level),contains_nuts_(contains_nuts){}

void Dessert :: setFlavorProfile(const FlavorProfile &flavor_profile){flavor_profile_=flavor_profile;} //putting values into dessert object and returning the values of dessert

Dessert :: FlavorProfile Dessert :: getFlavorProfile()const{return flavor_profile_;} //displaying profile of flavor 

void Dessert :: setSweetnessLevel(const int &sweetness_level){sweetness_level_=sweetness_level;} //setting the value of sweetness

int Dessert :: getSweetnessLevel() const{return sweetness_level_;} //returning int value of the sweetness level

void Dessert :: setContainsNuts(bool const contains_nuts){contains_nuts_=contains_nuts;} //puts value of bool into dessert

bool Dessert :: containsNuts() const{return contains_nuts_;} //returning a bool value if it has nuts or not