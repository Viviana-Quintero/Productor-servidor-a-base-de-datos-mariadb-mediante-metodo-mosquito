#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "productor.h"
#include "servidor.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Uso: %s [productor|servidor]\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "productor") == 0) {
        // Llamar a la función main del productor
        return productor_main();  // Asegúrate de que productor_main esté en productor.c
    } else if (strcmp(argv[1], "servidor") == 0) {
        // Llamar a la función main del servidor
        return servidor_main();  // Asegúrate de que servidor_main esté en servidor.c
    } else {
        printf("Opción no válida. Usa 'productor' o 'servidor'.\n");
        return 1;
    }
}
