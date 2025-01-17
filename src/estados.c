#include "../lib/lib.h"
#include "../lib/conf.h"

estados_t f_voltaje_correcto(void) {
    char voltaje = leer_bat();
    if (voltaje == HIGH) {
        activar_indicador_correcto();
        desactivar_buzz();
        return voltaje_correcto; 
    }
    return voltaje_incorrecto;
}

estados_t f_voltaje_incorrecto(void) {
    char voltaje = leer_bat();
    if (voltaje == LOW) {
        activar_indicador_luminico_incorrecto();
        activar_buzz();
        return voltaje_incorrecto;
    }
    return voltaje_correcto;
}
