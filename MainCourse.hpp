//headers + libraries
#ifndef MAINCOURSE_HPP
#define MAINCOURSE_HPP
#include <vector>
#include"Dish.hpp"
/*
 maincourse.hpp file
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

class MainCourse:public Dish{ //public class
public:
    enum  CookingMethod { GRILLED, BAKED, FRIED, STEAMED, RAW };
    enum  Category{ GRAIN, PASTA, LEGUME, BREAD, SALAD, SOUP, STARCHES,VEGETABLE };

    struct  SideDish
    {
      std :: string name;
      Category category;
    };

    MainCourse(); //intializing constructor
    //parameters
   /*
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

   //initalizing class with parameters
    MainCourse(const std::string& name, const std::vector<std::string>& ingredients={}, int prep_time=0,
     double price=0.0, CuisineType cuisine_type=CuisineType::OTHER, CookingMethod cooking_method=CookingMethod::GRILLED, 
        const std::string& protein_type="", const std::vector<SideDish>& side_dishes={}, bool gluten_free=false);

    void setCookingMethod(const CookingMethod &cooking_method); //setting the cooking method

  CookingMethod getCookingMethod ()const; //returing the cooking method

  void setProteinType(const std :: string &protein_type); //setting the protein type

  std :: string getProteinType() const; //returning protein type

  void addSideDish(const SideDish& side_dish); // adding sidedishes to the main course

  std :: vector<SideDish> getSideDishes() const; //returning the side dishes

  void setGlutenFree(bool const gluten_free); //being able to change the value of gluten free
  
  bool isGlutenFree() const; //returning function of bool type says it is gluten free or not
   
private: //private class
  bool gluten_free_ ;
  CookingMethod cooking_method_;
  std :: vector<SideDish> side_dishes_;
  std :: string protein_type_;
};
#endif
