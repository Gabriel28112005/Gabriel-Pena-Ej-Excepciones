
#ifndef EXCEPCIONES_PERSONALIZADAS_H
#define EXCEPCIONES_PERSONALIZADAS_H

#include <iostream>
#include <exception>

void motivo();

class MiExcepcion : public std::exception {
    public:
        explicit MiExcepcion(const std::string& m);
        const char* what() const noexcept override;
    private:
        std::string mensaje;
};



#endif //EXCEPCIONES_PERSONALIZADAS_H
