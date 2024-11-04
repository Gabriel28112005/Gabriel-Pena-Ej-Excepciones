#include <iostream>
#include <stdexcept>
#include "Ejercicio1/Banderas.h"
#include "Ejercicio2/Excepciones.h"
#include "Ejercicio3/Propagacion_explicita.h"
#include "Ejercicio 4/Excepciones_personalizadas.h"
#include "Ejercicio 5/Reactivacion.h"
#include "Ejercicio 6/Excepciones_no_interpretadas.h"
#include "Ejercicio 7/Adquisicion.h"

int main() {

    //Ejercicio 1 -  Banderas e interrupciones y tratamiento de los errores en lenguaje C

    std::cout<<"-------------------"<<std::endl;
    std::cout<<"    EJERCICIO 1:"<<std::endl;
    std::cout<<"-------------------"<<std::endl;

    int result = divide(5, 0);
    if (errorFlag) {
        std::cout<<"Ocurrio un error: division por cero."<<std::endl;
        // Se maneja el error y se reinicia la bandera
        errorFlag = false;
    }

    //Ejercicio 2 - Las excepciones son más seguras que los errores.

    std::cout<<"-------------------"<<std::endl;
    std::cout<<"    EJERCICIO 2:"<<std::endl;
    std::cout<<"-------------------"<<std::endl;

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

    //Ejercicio 3 - Propagación explícita.

    std::cout<<"-------------------"<<std::endl;
    std::cout<<"    EJERCICIO 3:"<<std::endl;
    std::cout<<"-------------------"<<std::endl;

    try {
            func3();
        }
    catch (const std::runtime_error& e) {
            std::cout << "Excepcion detectada en el main: " << e.what() << std::endl;
        }


    //Ejercicio 4 - Tipos de excepciones personalizadas: Definición de clases de excepción, Instanciación de clases, Clases de excepción derivadas.

    std::cout<<"-------------------"<<std::endl;
    std::cout<<"    EJERCICIO 4:"<<std::endl;
    std::cout<<"-------------------"<<std::endl;

    try {
        motivo();
    }
    catch (const MiExcepcion& e) {
        std::cout << "Se ha detectado una excepcion: " << e.what() << std::endl;
    }

    //Ejercicio 5 - Manejo de una excepción y reactivación.

    std::cout<<"-------------------"<<std::endl;
    std::cout<<"    EJERCICIO 5:"<<std::endl;
    std::cout<<"-------------------"<<std::endl;

    try{
       try{
           reactivacion();
       }
        catch (const std::runtime_error& e){
            std::cout<<"Se ha detectado una excepcion. Se esta relanzando... "<<std::endl;
            throw;
        }
    }
    catch(const std::runtime_error& e){
        std::cout<<"Excepcion detectada en el main: "<<e.what()<<std::endl;
    }

    //Ejercicio 6 - Excepciones no interpretadas.

    std::cout<<"-------------------"<<std::endl;
    std::cout<<"    EJERCICIO 6:"<<std::endl;
    std::cout<<"-------------------"<<std::endl;

    //no_interpretada();
    std::cout<<"Cuando ejecutamos el programa, este da error dado que intenamos lanzar una excepcion que no es capturada"<<std::endl;

    //Ejercicio 7 - Adquisición de recursos.

    std::cout<<"-------------------"<<std::endl;
    std::cout<<"    EJERCICIO 7:"<<std::endl;
    std::cout<<"-------------------"<<std::endl;

    std::ofstream file("archivo.txt");

    try {
        file.close();
        escribe(file);
    }
    catch (const std::runtime_error& e) {
        std::cout << "Excepcion detectada: " << e.what() << std::endl;
    }

    if (file.is_open()) {
        file.close();
    }

    return 0;
}