#include "Excepciones_no_interpretadas.h"
#include <stdexcept>

void no_interpretada() {
    throw std::runtime_error("Excepcion no interpretada");
}