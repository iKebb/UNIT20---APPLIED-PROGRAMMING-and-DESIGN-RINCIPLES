#include <iostream>
#include <string>
// mucho texto
int main()
{
  std::string nombre = "Carla";
  std::string apellido = "Parejo";
  int edad = 22;
  double estatura = 1.68;
  bool mayor_edad = true;

  std::cout << "Datos de ejemplo: " << std::endl
            << std::endl;
  std::cout << "Nombre: " << nombre << std::endl;
  std::cout << "Apellido " << apellido << std::endl;
  std::cout << "Estatura: " << estatura << std::endl;
  std::cout << "Edad: " << edad << std::endl;
  std::cout << "Estatura: " << estatura << std::endl;
  std::cout << "Es mayor de edad: " << (mayor_edad ? "Si" : "No") << std::endl;

  std::cout << "Inggrese sus datos ahora: " << std::endl
            << std::endl;
  std::cout << "Nombre: ";
  std::cin >> nombre;
  std::cout << "Apellido: ";
  std::cin >> apellido;
  std::cout << "Edad: ";
  std::cin >> edad;
  mayor_edad = (edad >= 18) ? true : false;
  std::cout << "Estatura: ";
  std::cin >> estatura;
  std::cout << std::endl;

  std::cout << "Sus datos son:"
            << std::endl
            << std::endl;
  std::cout << "Nombre: " << nombre << std::endl;
  std::cout << "Apellido " << apellido << std::endl;
  std::cout << "Estatura: " << estatura << std::endl;
  std::cout << "Edad: " << edad << std::endl;
  std::cout << "Estatura: " << estatura << std::endl;
  std::cout << "Es mayor de edad: " << (mayor_edad ? "Si" : "No") << std::endl;
}