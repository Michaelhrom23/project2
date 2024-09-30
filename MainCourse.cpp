//header file
#include "MainCourse.hpp"

/*
 maincourse.cpp file
 Michael Romero
 maincourse.cpp implements the maincourse class

 The class has methods/functions to view and manipulate dishes, including:
 1. Name
 2. Ingredients 
 3. Preparation Time
 4. Price 
 5. Cuisine
 6. Cooking Method
 7. Protein Type
 8. Side Dishes
 9. Gluten Free
*/

MainCourse :: MainCourse(): Dish(),cooking_method_(CookingMethod :: GRILLED),protein_type_("UNKNOWN"), side_dishes_(), gluten_free_(false){} 
    //parameters of constructor
   /*
     name, name of the main course
     ingredients, ingredients of main course
     prep_time, preparation time or course
     price, price of the main course
     cuisine_type, cuisine of main course
     cooking_method, method used for main course
     protein_type, type of protein used in main course
     side_dishes, side dishes served with main course
     gluten_free, says if main course is gluten-free or not
    */
MainCourse :: MainCourse(const std :: string& name, const std::vector <std :: string> &ingredients, int prep_time,
     double price, CuisineType cuisine_type, CookingMethod cooking_method, 
        const std :: string &protein_type, const std :: vector<SideDish> &side_dishes, bool gluten_free):Dish(name,ingredients,
      prep_time,price,cuisine_type),cooking_method_(cooking_method),
      protein_type_(protein_type), side_dishes_(side_dishes), gluten_free_(gluten_free) {}
      //construtor with parameters

void MainCourse :: setCookingMethod(const CookingMethod &cooking_method){cooking_method_=cooking_method;}

MainCourse :: CookingMethod MainCourse ::getCookingMethod ()const{return cooking_method_;} //method to get cooking method

void MainCourse :: setProteinType(const std :: string &protein_type){protein_type_=protein_type;} //method to set protein type

std :: string MainCourse :: getProteinType() const{return protein_type_; } //returns the protein type of the main course

void MainCourse :: addSideDish(const SideDish& side_dish) {side_dishes_.push_back(side_dish);} //adding side dish to main course

std :: vector<MainCourse::SideDish> MainCourse :: getSideDishes() const {return side_dishes_;  } //returning side dish

void MainCourse :: setGlutenFree(bool const gluten_free){gluten_free_ = gluten_free;} // using method to set the gluten free bool

bool MainCourse :: isGlutenFree() const{return gluten_free_;} //returns a bool value