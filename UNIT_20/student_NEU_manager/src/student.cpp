#include <iostream>
#include <string>
#include <fstream>
#include "../include/nlohmann/json.hpp"
#include "../include/student.h"

using json = nlohmann::json;

// Definición del constructor
Student::Student(unsigned int id,
                 std::string name,
                 std::string surname,
                 unsigned int age,
                 std::string email,
                 std::string phone,
                 std::string address,
                 std::string city,
                 std::string country,
                 std::string postalCode,
                 std::string career,
                 std::string university)
    : id(id),
      name(name),
      surname(surname),
      age(age),
      email(email),
      phone(phone),
      address(address),
      city(city),
      country(country),
      postalCode(postalCode),
      career(career),
      university(university)
{
}

// Definición del método showInfo() marcado como const
void Student::showInfo() const
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

// Definición del método miembro loadFromJSON (para un único objeto)
void Student::loadFromJSON(const std::string &path)
{
  std::ifstream file(path);
  if (file.is_open())
  {
    json j;
    file >> j;
    id = j.value("id", 0);
    name = j.value("name", "Jane");
    surname = j.value("surname", "Doe");
    age = j.value("age", 0);
    email = j.value("email", "Unknown");
    phone = j.value("phone", "Unknown");
    address = j.value("address", "Unknown");
    city = j.value("city", "Unknown");
    country = j.value("country", "Unknown");
    postalCode = j.value("postalCode", "Unknown");
    career = j.value("career", "Unknown");
    university = j.value("university", "Unknown");
  }
  else
  {
    std::cerr << "Could not open file: " << path << std::endl;
  }
}

// Definición de la función global loadStudentsFromJSON a nivel de archivo
std::vector<Student> loadStudentsFromJSON(const std::string &path)
{
  std::vector<Student> students;
  std::ifstream file(path);
  if (file.is_open())
  {
    json j;
    file >> j;
    for (const auto &item : j)
    {
      // Se crea un objeto Student con valores por defecto
      Student ss(0, "", "", 0, "", "", "", "", "", "", "", "");
      ss.id = item.value("id", 0);
      ss.name = item.value("name", "Jane");
      ss.surname = item.value("surname", "Doe");
      ss.age = item.value("age", 0);
      ss.email = item.value("email", "Unknown");
      ss.phone = item.value("phone", "Unknown");
      ss.address = item.value("address", "Unknown");
      ss.city = item.value("city", "Unknown");
      ss.country = item.value("country", "Unknown");
      ss.postalCode = item.value("postalCode", "Unknown");
      ss.career = item.value("career", "Unknown");
      ss.university = item.value("university", "Unknown");
      students.push_back(ss);
    }
  }
  else
  {
    std::cerr << "Could not open file: " << path << std::endl;
  }
  return students;
}
