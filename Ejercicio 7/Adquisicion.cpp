//
// Created by gapt2 on 04/11/2024.
//

#include "Adquisicion.h"
#include<iostream>
#include<stdexcept>
#include<fstream>

void escribe(std::ofstream& file){
    if (!file.is_open()) {
        throw std::runtime_error("No es posible escribir en un archivo cerrado");
    }
    file << "Hola mundo";
}