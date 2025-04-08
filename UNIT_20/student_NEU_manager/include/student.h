// File: student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

class Student
{
  // Attributes
  // id, name, surname, age, email, phone, address, city, country, postalCode, career, university

  // Methods
  // Constructor: Student(unsigned int id, std::string name, std::string surname,
  //                      unsigned int age, std::string email, std::string phone,
  //                      std::string address, std::string city, std::string country,
  //                      std::string postalCode, std::string career,
  //                      std::string university)
  // showInfo() const
  // loadFromJSON(const std::string &path)
public:
  unsigned int id;
  std::string name;
  std::string surname;
  unsigned int age;
  std::string email;
  std::string phone;
  std::string address;
  std::string city;
  std::string country;
  std::string postalCode;
  std::string career;
  std::string university;

  Student(unsigned int id,
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
          std::string university);

  void showInfo() const;
  void loadFromJSON(const std::string &path);
};

std::vector<Student> loadStudentsFromJSON(const std::string &path);

#endif // STUDENT_H