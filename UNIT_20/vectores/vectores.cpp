#include <iostream>
#include <string>
#include <vector>

int main()
{
  std::vector<int> intVector;

  intVector.push_back(10);
  intVector.push_back(20);
  intVector.push_back(30);
  intVector.push_back(40);
  intVector.push_back(50);

  std::cout << "El primer elemento del vector es: " << intVector[0] << std::endl;
  std::cout << "El siguiente elemento del vector es: " << intVector[1] << std::endl;
  std::cout << "El tamaño del vector es: " << intVector.size() << std::endl;
  std::cout << "Entonces, si mi vector tiene " << intVector.size()
            << " elementos, el último elemento es: " << intVector[intVector.size() - 1] << std::endl;
  std::cout << "La suma de mis elementos en el vector es: " << intVector[0] + intVector[1] + intVector[2] + intVector[3] + intVector[4] << std::endl;

  std::cout << "Pregunte por un número dentro del vector: " << std::endl;
  int number;
  std::cin >> number;
  std::cout << "El número que ingresaste es: " << number << std::endl;
};