//
// Created by gapt2 on 24/10/2024.
//

#include "Propagacion_explicita.h"
#include <iostream>
#include <stdexcept>

void func3() {
        throw std::runtime_error("Error en func3");
}

void func2() {
    func3();
}

void func1() {
    func2();
}
