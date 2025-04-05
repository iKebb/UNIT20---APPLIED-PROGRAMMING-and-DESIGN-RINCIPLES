#include <iostream>

int main()
{
  // std::cout << "Hola, este es mi primer programa en C++" << std::endl;
  // return 0;

  // Operadores de suma, resta, multiplicación y división de dos números enteros en C++:
  int a = 30;
  int b = 10;
  int sum = a + b;
  int rest = a - b;
  int div = a / b;
  int mul = a * b;

  std::cout << "La suma de los numeros " << a << " y " << b << " es: " << sum << std::endl;
  std::cout << "La resta de los numeros " << a << " y " << b << " es: " << rest << std::endl;
  std::cout << "La division de los numeros " << a << " y " << b << " es: " << div << std::endl;
  std::cout << "La multiplicacion de los numeros " << a << " y " << b << " es: " << mul << std::endl;
}
