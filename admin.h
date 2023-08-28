#ifndef ADMIN_H
#define ADMIN_H
#include "neurona.h"


class admin
{
private:
    neurona *lista_beg;
public:
    admin();
    void agregar_inicio(neurona *n_neurona);
    void agregar_final(neurona *n_neurona);
    void mostrar();
};

#endif // ADMIN_H
