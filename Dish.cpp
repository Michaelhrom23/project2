
/*
  dish file
  Michael Romero
  Implentmenting the constructor
*/

#include "Dish.hpp"
Dish::Dish():name_("UNKNOWN"),prep_time_(0),price_(0.0), cuisine_type_(OTHER){}

Dish::Dish(const std::string& name, const std::vector<std::string>& ingredients, int prep_time, double price, CuisineType cuisine_type) : name_(name), ingredients_(ingredients), prep_time_(prep_time), price_(price), cuisine_type_(cuisine_type)
{
    setName(name);
    setIngredients(ingredients);
    setPrepTime(prep_time);
    setPrice(price);
    setCuisineType(cuisine_type);
}

void Dish :: setName(const std::string &name){name_=name;}

std::string Dish :: getName() const{return name_;}

void Dish :: setIngredients(const std::vector<std::string> &ingredients){ingredients_=ingredients;}

std::vector<std::string>Dish::getIngredients() const{return ingredients_;}

void Dish :: setPrepTime(const int &prep_time){prep_time_=prep_time;}

int Dish :: getPrepTime() const{return prep_time_;}

void Dish :: setPrice(const double &price){price_=price;}

double Dish :: getPrice() const{return price_;}

void Dish :: setCuisineType(const CuisineType &cuisine_type){cuisine_type_=cuisine_type;}

std :: string Dish :: getCuisineType()const{
    switch(cuisine_type_){
        case CHINESE:
         return "CHINESE";
         break;

        case MEXICAN:
         return "MEXICAN";
         break;

        case INDIAN:
         return "INDIAN";
         break;
        
        case ITALIAN:
         return "ITALIAN";
         break;

        case FRENCH:
         return "FRENCH";
         break;

        case AMERICAN:
         return "AMERICAN";
         break;  

        case OTHER:
         return "OTHER";
         break;
    }
}

void Dish::display() const{
    std :: cout<<"Dish Name: " << getName() << std :: endl;
    std :: cout<<"Ingredients: ";
    for(size_t i= 0; i<ingredients_.size();i+=1){
        std :: cout<<ingredients_[i];
        if(i < ingredients_.size() -1){
            std :: cout<<", ";
        }
    }
    std :: cout<<std::endl;

    std :: cout<<"Preparation Time: "<< getPrepTime() << "minutes" << std::endl;
    std :: cout<<"Price: $" << std :: fixed << std :: setprecision(2) << getPrice() << std :: endl;
    std :: cout<<"Cuisine Type: " << getCuisineType() << std :: endl;
}
