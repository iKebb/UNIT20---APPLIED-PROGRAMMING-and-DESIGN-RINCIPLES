#include <iostream>

class Student
{
public:
  int id;
  std::string name;
  std::string surname;
  int age;
  std::string email;
  std::string phone;
  std::string address;
  std::string city;
  std::string country;
  std::string postalCode;
  std::string career;
  std::string university;

  void showInfo()
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
};

int main()
{
  Student s;

  s.id = 1;
  s.name = "<Jane>";
  s.surname = "<Doe>";
  s.age = 24;
  s.email = "<jane24doe@neu.seg>";
  s.phone = "<+1 (123) 123-4567>";
  s.address = "<123 Main St>";
  s.city = "<New Eridu>";
  s.country = "<USA>";
  s.postalCode = "<122440>";
  s.career = "<Information Technology>";
  s.university = "<New Eridu University>";

  s.showInfo();
  return 0;
}