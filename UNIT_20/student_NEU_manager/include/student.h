// File: student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
public:
  unsigned int id;
  unsigned int age;
  std::string name;
  std::string surname;
  std::string email;
  std::string phone;
  std::string address;
  std::string city;
  std::string country;
  std::string postalCode;
  std::string career;
  std::string university;

  Student(std::string name,
          std::string surname,
          unsigned int id, unsigned int age,
          std::string email,
          std::string phone,
          std::string address,
          std::string city,
          std::string country,
          std::string postalCode,
          std::string career,
          std::string university);

  void showInfo();
  void loadFromJSON(const std::string &path);
};

#endif // STUDENT
