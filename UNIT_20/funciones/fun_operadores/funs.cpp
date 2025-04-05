#include <iostream>

int suma(int a, int b)
{
  return a + b;
}

int resta(int a, int b)
{
  return a - b;
}

int division(int a, int b)
{
  return a / b;
}

int multiplicacion(int a, int b)
{
  return a * b;
}

int main()
{
  int a, b;
  std::cin >> a >> b;
  std::cout << "La suma de a y b es: " << suma(a, b) << std::endl;
}