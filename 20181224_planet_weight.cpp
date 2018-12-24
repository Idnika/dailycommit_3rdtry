#include <iostream>

int main() {
  
  double weight_earth;
  int number_planet;
  double weight_want;
  
  std::cout << "Input your weight on earth.";
  std::cin >> weight_earth;
  
  std::cout << "Input your number of planet.";
  std::cin >> number_planet;
  
  switch (number_planet) {
      
    case 1 :
      weight_want = weight_earth * 0.78;
      break;
      
    case 2 :
      weight_want = weight_earth * 0.39;
      break;
      
    case 3 :
      weight_want = weight_earth * 2.65;
      break;
      
    case 4 :
      weight_want = weight_earth * 1.17;
      break;
      
    case 5 :
      weight_want = weight_earth * 1.05;
      break;
      
    case 6 :
      weight_want = weight_earth * 1.23;
      break;
  }
  
  std::cout << "The weight on " << number_planet << "th planet is " << weight_want << ".\n";
  
  
  
  
  
  
  
  
}