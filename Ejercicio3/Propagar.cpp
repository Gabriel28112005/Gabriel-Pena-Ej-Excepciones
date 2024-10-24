//
// Created by gapt2 on 24/10/2024.
//

#include "Propagar.h"
#include<iostream>
#include<stdexcept>

int suma(int a, int b) {
    return a + b;
}


void func3() {
    throw std::runtime_error("Error en func3");
}

void func2() {
    func3();
}

void func1() {
    func2();
    suma(2, -3);
}
