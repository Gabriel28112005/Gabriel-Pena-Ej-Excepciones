

#include <iostream>
#include "Ejercicio1/Banderas.h"
#include "Ejercicio2/Excepciones.h"
#include "Ejercicio3/Propagar.h"


int main() {
    int result = divide(5, 0);
    if (errorFlag) {
        // Si ocurre un error, se establece la bandera de error
        std::cout<<"Ocurrio un error: division por cero."<<std::endl;
        errorFlag = true;

        return 0;
    }

    //ejercicio 2
    // Uso de la versión que devuelve un valor de error
    int resultError = divideError(5, 0);
    if (resultError == -1) {
        std::cout << "Error: division por cero." << std::endl;
    }

    // Uso de la versión que lanza una excepción
    try {
        int resultException = divideException(5, 0);
    }
    catch (const std::invalid_argument& e) {
        std::cout << "Excepcion: " << e.what() << std::endl;
    }



    try {
            func3();
        }
    catch (const std::runtime_error& e) {
            std::cout << "Excepción capturada en main: " << e.what() << std::endl;
        }

    return 0;

}