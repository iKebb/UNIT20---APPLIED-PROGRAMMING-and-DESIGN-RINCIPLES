#include <iostream>
#include <string>
#include <map>

// clase Comida, debe contender: partes base de la comida, tales que:
// id (identificador de la comida),
// nombre (nombre de la comida),
// tipo (string que define si es: vegerariana, vegana, carnivora),
// calorias (valor nutricional de la receta),
// ingredientes (diccionario que contiene el nombre del ingrediente/s y la cantidad necesaria para la receta),

class Food
{
private:
  unsigned int id;
  std::string name;
  std::string type;
  unsigned int calories;

}

// clase heredada Receta, que contiene:
// cantidad de ingredientes (para cálculo de porciones),
// tiempo de preparación (en minutos),
// pasos o guía de preparación (lista de pasos para preparar la receta),
// dificultad (string que define si es: fácil, medio, difícil).

// la lóguca se maneja con archivos JSON para cargar las recetas separadas por tipo de comida,
// guisos.json, ensaladas.json, sopas.json, etc.
// y un archivo recetas.json que contiene la lista de recetas por tipo de comida.
