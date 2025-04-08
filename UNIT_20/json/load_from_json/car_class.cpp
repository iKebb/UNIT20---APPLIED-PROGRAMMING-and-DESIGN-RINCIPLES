// main.cpp
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "../nlohmann/json.hpp"

using json = nlohmann::json;
// Create a Class Car with the following attributes:
// car_id, car_year, car_name, car_model, car_color, car_type, car_price
class Car
{
private:
  unsigned int car_id;
  std::string car_year;
  std::string car_name;
  std::string car_model;
  std::string car_color;
  std::string car_type;
  unsigned int car_price;

  // Create a method showInfo() that prints all the attributes of the car
public:
  // Create a constructor that initializes all the attributes
  // Constructor must be public ALWAYS
  Car(
      unsigned int id,
      std::string year,
      std::string name,
      std::string model,
      std::string color,
      std::string type,
      unsigned int price)
  {
    car_id = id;
    car_year = year;
    car_name = name;
    car_model = model;
    car_color = color;
    car_type = type;
    car_price = price;
  }

  void showInfo()
  {
    std::cout << "Car info:" << std::endl;
    std::cout << "Car ID: " << car_id << std::endl;
    std::cout << "Car Year: " << car_year << std::endl;
    std::cout << "Car Name: " << car_name << std::endl;
    std::cout << "Car Model: " << car_model << std::endl;
    std::cout << "Car Color: " << car_color << std::endl;
    std::cout << "Car Type: " << car_type << std::endl;
    std::cout << "Car Price: " << car_price << std::endl;
    std::cout << std::endl;
  }

  // Create a method to load the cars data from a JSON file
};

// hardcode cars for testing Car class
Car car1(1, "2020", "Toyota", "Corolla", "Red", "Sedan", 20000);

int main()
{
  std::cout << "Initializing proram..." << std::endl;
  car1.showInfo();
  return 0;
};