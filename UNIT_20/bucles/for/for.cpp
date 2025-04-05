#include <iostream>
// demostracion de bucles for
int main()
{
  // contador:
  for (int i = 1; i <= 10; i++)
  {
    std::cout << i << std::endl;
  }

  std::cout << "------------------------" << std::endl;

  // contador inverso:
  for (int i = 10; i >= 1; i--)
  {
    std::cout << i << std::endl;
  }

  std::cout << "------------------------" << std::endl;

  // iterador (numeración de un array):
  std::string array[5] = {"Manzana", "Pera", "Naranja", "Sandia", "Uva"};
  int arraySize = sizeof(array) / sizeof(array[0]);
  for (int i = 1; i <= arraySize; i++)
  {
    std::cout << i << ". " << array[i - 1] << std::endl;
  }

  // escribir en un array:
  std::string array2[5] = {
      "",
      "",
      "",
      "",
      "",
  };
  for (int i = 0; i < arraySize; i++)
  {
    std::cout << "Escribe el nombre de la fruta " << i + 1 << ": ";
    std::cin >> array2[i];
    std::cout << array2[i] << std::endl;
  }
}