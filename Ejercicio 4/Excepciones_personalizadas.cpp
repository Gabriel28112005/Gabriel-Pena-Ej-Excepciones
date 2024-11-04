#include "Excepciones_personalizadas.h"
#include <iostream>

void motivo() {
    throw MiExcepcion("Ocurrio un error en el sistema");
}

MiExcepcion::MiExcepcion(const std::string& m) : mensaje(m) {}

const char* MiExcepcion::what() const noexcept {
    return mensaje.c_str();
}