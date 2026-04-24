#pragma once
#include <EstadoFoco.hpp>

class Foco
{

private:
    EstadoFoco encendido;

public:
    Foco() {
        this->encendido = false;
    }
    ~Foco() {}
        void Encender() {
            this->encendido = true;
    }
            void Apagar() {
                this->encendido = false;
    }

    EstadoFoco LeerEstado(){
            return this->encendido;
    }

};