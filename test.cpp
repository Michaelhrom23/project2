//headers + libraries
#include "Dish.hpp"
#include "Appetizer.hpp"
#include "MainCourse.hpp"
#include"Dessert.hpp"

/*
test.cpp file
Michael Romero
test.cpp implements all classes
*/

int main() {
    auto ServiceStyleString = [](Appetizer::ServingStyle style){
        switch (style) {
            case Appetizer :: ServingStyle :: PLATED : return "PLATED";
            case Appetizer :: ServingStyle :: BUFFET : return "BUFFET"; 
            case Appetizer :: ServingStyle :: FAMILY_STYLE : return "FAMILY_STYLE";
            default : return "UNKNOWN";
        }
    };

   Appetizer appetizer1{"UNKNOWN", {}, 0, 0.00, Dish :: CuisineType :: OTHER, Appetizer :: ServingStyle :: FAMILY_STYLE, 7, true};
   appetizer1.setName("UNKNOWN");
   appetizer1.getName();

   appetizer1.setIngredients({});
   appetizer1.getIngredients();

   appetizer1.setPrepTime(0);
   appetizer1.getPrepTime();

   appetizer1.setPrice(0.00);
   appetizer1.getPrice();

   appetizer1.setCuisineType(Dish :: CuisineType :: OTHER);
   appetizer1.getCuisineType();

   appetizer1.setServingStyle(Appetizer :: ServingStyle :: FAMILY_STYLE);
   appetizer1.getServingStyle();

   appetizer1.setSpicinessLevel(7);
   appetizer1.getSpicinessLevel();

   appetizer1.setVegetarian(true);
   appetizer1.isVegetarian();

   appetizer1.display();



   appetizer1.setSpicinessLevel(7);
   std :: cout << "Spiciness Level: " << appetizer1.getSpicinessLevel() << std :: endl;
   appetizer1.setServingStyle(Appetizer :: ServingStyle :: FAMILY_STYLE);
   std :: string servingStyle = ServiceStyleString(appetizer1.getServingStyle());
   std :: cout << "Serving Style: " << servingStyle << std :: endl;

   appetizer1.setVegetarian(true);
   std :: cout << "Vegetarian: " << (appetizer1.isVegetarian()? "True" : "False") << std :: endl;

    std :: cout << std :: endl;

    std :: vector<std :: string> ingredients = {"Chicken", "Olive Oil", "Garlic", "Rosemary"};
    MainCourse :: SideDish sideDish1;
    
    sideDish1.name = "Mashed Potatoes";
    sideDish1.category = MainCourse :: Category :: STARCHES;

    MainCourse :: SideDish sideDish2;
    sideDish2.name = "Green Beans";
    sideDish2.category = MainCourse :: Category :: VEGETABLE;

    std :: vector<MainCourse :: SideDish> sideDishes = {sideDish1, sideDish2};

    MainCourse myMainCourse("Grilled Chicken", ingredients, 30, 18.99, 
                            Dish::CuisineType :: AMERICAN, 
                            MainCourse :: CookingMethod :: GRILLED, std :: string("Chicken"), sideDishes, true);
    myMainCourse.display();

    myMainCourse.setCookingMethod( MainCourse :: CookingMethod :: GRILLED);
    myMainCourse.getCookingMethod ();

    myMainCourse.setProteinType("Chicken");
    myMainCourse.getProteinType();

    MainCourse :: SideDish mashedPotato;
    mashedPotato.name = "Mashed Potatoes";
    mashedPotato.category = MainCourse :: Category :: STARCHES;
    myMainCourse.addSideDish(mashedPotato);
    myMainCourse.getSideDishes();

    myMainCourse.setGlutenFree(true);
    myMainCourse.isGlutenFree();

    myMainCourse.setName("Grilled Chicken");
    myMainCourse.getName();

    myMainCourse.setIngredients(ingredients);
    myMainCourse.getIngredients();

    myMainCourse.setPrepTime(30);
    myMainCourse.getPrepTime();

    myMainCourse.setPrice(18.99);
    myMainCourse.getPrice();

    myMainCourse.setCuisineType(Dish :: CuisineType :: AMERICAN);
    myMainCourse.getCuisineType();

    auto cookingMethodToString = [](MainCourse :: CookingMethod methode) {
        switch (methode) {
            case MainCourse :: BAKED: return "BAKED";
            case MainCourse :: FRIED: return "FRIED";
            case MainCourse :: STEAMED: return "STEAMED";
            case MainCourse :: RAW: return "RAW";
            case MainCourse :: GRILLED: return "GRILLED";
            default : return "UNKNOWN";
        }
    };
    std::cout << "Cooking Method: " << cookingMethodToString(myMainCourse.getCookingMethod()) << std :: endl;
    std::cout << "Protein Type: " << myMainCourse.getProteinType() << std :: endl;
    std::cout << "Side Dishes: ";


auto categoryToString = [](MainCourse::Category category) {
        switch (category) {
            case MainCourse :: Category :: PASTA : return "Pasta";
            case MainCourse :: Category :: GRAIN : return "Grain";
            case MainCourse :: Category :: LEGUME : return "Legume";
            case MainCourse :: Category :: BREAD : return "Bread";
            case MainCourse :: Category :: VEGETABLE : return "Vegetable";
            case MainCourse :: Category :: SALAD : return "Salad";
            case MainCourse :: Category :: SOUP : return "Soup";
            case MainCourse :: Category :: STARCHES : return "Starches";
            
            default : return "Unknown";
        }
    };
    
    const auto& sides = myMainCourse.getSideDishes();

    for (size_t i = 0; i < sides.size(); i+=1) {
        const auto& sideDish = sides[i];
        std::cout << sideDish.name << " (" << categoryToString(sideDish.category) << ")";
        if (i != sides.size() - 1) {
            std :: cout << ", ";
        }
    }
    std::cout << std :: endl;

    std::cout << "Gluten-Free: " << (myMainCourse.isGlutenFree() ? "True" : "False") << std :: endl;
    std::cout << std :: endl;
    

    std :: vector<std :: string> ingredients1 = {"Flour", "Sugar", "Cocoa Powder", "Eggs"};

    Dessert dessert1{"Chocolate Cake", ingredients1, 45, 7.99, Dish :: CuisineType :: FRENCH,Dessert :: FlavorProfile :: SWEET,9,false};

    dessert1.setName("Chocolate Cake");
    dessert1.getName();

    dessert1.setIngredients(ingredients1);
    dessert1.getIngredients();

    dessert1.setPrepTime(45);
    dessert1.getPrepTime();

    dessert1.setPrice(7.99);
    dessert1.getPrice();

    dessert1.setCuisineType(Dish::CuisineType :: FRENCH);
    dessert1.getCuisineType();

    dessert1.display();

    dessert1.setFlavorProfile(Dessert :: FlavorProfile :: SWEET);
    dessert1.getFlavorProfile();

    dessert1.setSweetnessLevel(9);
    dessert1.getSweetnessLevel();

    dessert1.setContainsNuts(false);
    dessert1.containsNuts();
   
    auto flavorTostring = [](Dessert :: FlavorProfile flavor) {
        switch (flavor) {
            case Dessert :: FlavorProfile :: BITTER : return "BITTER";
            case Dessert :: FlavorProfile :: SWEET : return "SWEET";
            case Dessert :: FlavorProfile :: SOUR : return "SOUR";
            case Dessert :: FlavorProfile :: UMAMI : return "UMAMI";
            case Dessert :: FlavorProfile :: SALTY : return "SALTY";
           
            default : return "Unknown";
        }
    };
    
    std :: string flavorProfile = flavorTostring(dessert1.getFlavorProfile());
    std :: cout << "Flavor Profile: " << flavorProfile << std :: endl;
    std :: cout << "Sweetness Level: " << dessert1.getSweetnessLevel()<<std :: endl;
    std :: cout << "Contains Nuts: " << (dessert1.containsNuts()?"True" : "False") << std :: endl;
    return 0;
}