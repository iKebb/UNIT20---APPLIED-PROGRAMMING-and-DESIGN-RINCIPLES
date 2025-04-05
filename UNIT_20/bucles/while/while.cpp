#include <iostream>
// demostracion de bucles while
int main()
{
  // contador:
  int i = 0;
  while (i <= 10)
  {
    std::cout << i << std::endl;
    i++;
  }

  std::cout << "------------------------" << std::endl;

  // listar array:
  std::string array[5] = {"Manzana", "Pera", "Naranja", "Sandia", "Uva"};
  int arraySize = sizeof(array) / sizeof(array[0]);

  int j = 0;
  while (j < arraySize)
  {

    std::cout << j + 1 << ". " << array[j] << std::endl;
    j++;
  }

  std::cout << "------------------------" << std::endl;

  // escribir en un array:
  std::string array2[5] = {
      "",
      "",
      "",
      "",
      "",
  };
  int k = 0;
  while (k < arraySize)
  {
    std::cout << "Escribe el nombre de la fruta " << k + 1 << ": ";
    std::cin >> array2[k];
    k++;
  }
  // std::cout << array2 << std::endl; ES INCORRECTO, no se puede imprimir un array directamente, hay que recorrerlo:
  for (int l = 0; l < arraySize; l++)
  {
    std::cout << array2[l] << std::endl;
  }
}