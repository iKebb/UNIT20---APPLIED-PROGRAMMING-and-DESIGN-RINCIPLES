// File: main.cpp
#include <iostream>
#include <string>
#include <vector>
#include "../include/student.h"

int main()
{
  std::string path = "../data/students.json";
  auto students = loadStudentsFromJSON(path);
  for (const auto &s : students)
  {
    s.showInfo();
    std::cout << "------------------------" << std::endl;
  }
  return 0;
}