// Práctica 5: El mayor de tres números
// Traduce TU receta de RECETA.md a C++, paso por paso.
// Deja el comentario "// Paso N" sobre cada bloque, con la numeración de TU receta.

// ¿Recuerdas qué hace iostream?
#include <iostream>
using namespace std;

 
// ¿Qué función de utilerias.h vas a usar? ¿Por qué esa y no la otra?
#include "utilerias.h"

int main() {

    double numero1;
    double numero2;
    double numero3;

    std::cout << "el mayor de 3 :V" << endl;
    std::cout <<"numero 1=";
      std:: cin >> numero1;
          std::cout <<"numero 2=";
                std:: cin >> numero2;
                          std::cout <<"numero 3=";
                                          std:: cin >> numero3 ;

if(numero1>numero2 && numero1>numero3) { std:: cout << "mayor=" << numero1 << std::endl;}
   if(numero2>numero1 && numero2>numero3) { std:: cout << "mayor=" << numero2 << std::endl;}
      if(numero3>numero1 && numero3>numero2) { std:: cout << "mayor=" << numero3 << std::endl;}




    // Variables (siempre inicializadas)
    // TODO: ¿cuántas necesitas? ¿De qué tipo? ¿Necesitas alguna además de los tres números?

    // Paso 1: mensaje de bienvenida
    // TODO

    // TODO: el resto de tu receta, paso por paso.
    //       ¿Tu decisión necesita una cadena if / else if / else o varios if independientes?
    //       ¿Qué pasa con tu código si dos números son iguales?

    // ¿Qué significa return 0;?
    return 0;
}