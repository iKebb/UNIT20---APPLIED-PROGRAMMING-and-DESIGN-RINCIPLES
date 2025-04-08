#include <iostream>
#include <string>
#include <map>

int main()
{
  std::map<std::string, int> frutas; // fruta, cantidad

  frutas["manzana"] = 12;
  frutas["pera"] = 5;
  frutas["naranja"] = 8;
  frutas["sandia"] = 3;
  frutas["mango"] = 7;
  frutas["kiwi"] = 2;

  std::cout << "Frutas y cantidades:\n";
  for (auto &fruta : frutas)
  {
    std::cout << fruta.first << ": " << fruta.second << "\n";
  }

  std::cout << "Menu: " << "\n";
  std::cout << "¿Que fruta quieres sacar?\n";
  std::string fruta_sacar_string;
  std::cin >> fruta_sacar_string;
  std::cout << frutas.at(fruta_sacar_string) << std::endl;
}