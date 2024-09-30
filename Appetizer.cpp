/*
 appetizer.cpp file
 Michael Romero
 Appetizer.cpp implements the Appetizer class

 The class has methods/functions to view and manipulate dishes, including:
 1. Name
 2. Ingredients 
 3. Preparation Time
 4. Price 
 5. Cuisine
 6. Spiciness
 7. If vegetarian or not
*/

#include "Appetizer.hpp" //importing header file 

Appetizer :: Appetizer () : Dish (),serving_style_(ServingStyle :: PLATED), spiciness_level_(0),vegetarian_(false){} // declaring parameterized constructor
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
   //creating instance of the class and assigning values into the interface
Appetizer :: Appetizer(const std :: string& name, const std :: vector <std :: string> &ingredients, int prep_time, double price, CuisineType cuisine_type,
 ServingStyle serving_style, int spiciness_level, bool vegetarian)
    : Dish(name, ingredients, prep_time, price, cuisine_type),
      serving_style_(serving_style),
      spiciness_level_(spiciness_level),
      vegetarian_(vegetarian) {
    }
void Appetizer :: setServingStyle(const ServingStyle &serving_style){serving_style_=serving_style;} //method sets the private member, void type

Appetizer :: ServingStyle Appetizer :: getServingStyle() const{return serving_style_;} //method that returns the serving style/ presentation

void Appetizer :: setSpicinessLevel(const int &spiciness_level){spiciness_level_=spiciness_level;}// function returns spiciness

int Appetizer :: getSpicinessLevel() const{return spiciness_level_;}

void Appetizer :: setVegetarian(const bool &vegetarian){vegetarian_=vegetarian;} //function sets if a vegetarian or not to the private variable

bool Appetizer :: isVegetarian() const{return vegetarian_;} //setting up bool for if vegetarian or not, returns true or false