// File: student.cpp
// #include "student.h"
#include <iostream>
#include <string>
#include <fstream>
#include <nlohmann/json.hpp>
#include "../include/student.h"

using json = nlohmann::json;

Student::Student(std::string name,
                 std::string surname,
                 unsigned int id, unsigned int age,
                 std::string email,
                 std::string phone,
                 std::string address,
                 std::string city,
                 std::string country,
                 std::string postalCode,
                 std::string career,
                 std::string university)
    : name(name),
      surname(surname),
      id(id),
      age(age),
      email(email),
      phone(phone),
      address(address),
      city(city),
      country(country),
      postalCode(postalCode),
      career(career),
      university(university) {}

void Student::showInfo()
{
  std::cout << "ID: " << id << std::endl;
  std::cout << "Name: " << name << std::endl;
  std::cout << "Surname: " << surname << std::endl;
  std::cout << "Age: " << age << std::endl;
  std::cout << "Email: " << email << std::endl;
  std::cout << "Phone: " << phone << std::endl;
  std::cout << "Address: " << address << std::endl;
  std::cout << "City: " << city << std::endl;
  std::cout << "Country: " << country << std::endl;
  std::cout << "Postal Code: " << postalCode << std::endl;
  std::cout << "Career: " << career << std::endl;
  std::cout << "University: " << university << std::endl;
}

void Student::loadFromJSON(const std::string &path)
{
  std::ifstream file(path);
  if (file.is_open())
  {
    json j;
    file >> j;

    id = j["id"];
    name = j["name"];
    surname = j["surname"];
    age = j["age"];
    email = j["email"];
    phone = j["phone"];
    address = j["address"];
    city = j["city"];
    country = j["country"];
    postalCode = j["postalCode"];
    career = j["career"];
    university = j["university"];
  }
  else
  {
    std::cerr << "Could not open file: " << path << std::endl;
  }
};