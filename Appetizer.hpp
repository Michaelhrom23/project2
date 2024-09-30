//needed header files + libraries

#ifndef APPETIZER_HPP
#define APPETIZER_HPP
#include <vector>
#include "Dish.hpp"

/*
 appetizer.hpp file
 Michael Romero
 Appetizer.hpp intializes the Appetizer class

 The class has methods/functions to view and manipulate dishes, including:
 1. Name
 2. Ingredients 
 3. Preparation Time
 4. Price 
 5. Cuisine
 6. Spiciness
 7. If vegetarian or not
*/


class Appetizer : public Dish{ //class
public: //public class
    enum  ServingStyle { PLATED, FAMILY_STYLE, BUFFET }; //enum type

    Appetizer(); //intializing default constructor

    /*
     The parameters of the constructor: 
     name, name of the food
     ingredients, ingreds in the food
     prep_time, time to make the food
     price, cost of the food
     cuisine_type, food type
     serving_style, presentation of the food
     spiciness_level, spiciness of the food
     vegetarian Flag, if vegetaraian or not
    */

    // declaring parameterized constructor for appetizer and serving style
    Appetizer(const std :: string& name, const std :: vector<std :: string> &ingredients={}, int prep_time=0, double price=0.0, CuisineType cuisine_type=CuisineType::OTHER,
    ServingStyle serving_style=ServingStyle :: PLATED, int spiciness_level=0, bool vegetarian=false);

    void setServingStyle(const ServingStyle &serving_style); //public method to set the serving size of the appetizer from the enum

    ServingStyle getServingStyle() const;

    void setSpicinessLevel(const int &spiciness_level); //public method to set the private member to a level of spicness

    int getSpicinessLevel() const; //returning the spicness level

    void setVegetarian(const bool &vegetarian); //public method to set the vegetarian or non-vegetarain status

    bool isVegetarian() const;

//private class
private:
    int spiciness_level_;
    ServingStyle serving_style_;
    bool vegetarian_;
};
#endif



