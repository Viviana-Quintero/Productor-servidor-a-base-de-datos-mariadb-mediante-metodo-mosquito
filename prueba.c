#include <stdio.h>
#include "consultas.h" // Incluye las declaraciones de las funciones

int main() {
    // Crear una conexión a la base de datos
    ConexionDB *conexion = conexion_bd();
    if (conexion == NULL) {
        fprintf(stderr, "Error al conectar con la base de datos.\n");
        return 1;
    }

    // Insertar un registro en la base de datos
    if (insertar_datos(conexion, "Juan Perez", 20, 12345, 3, "Matemáticas") == 0) {
        printf("Datos insertados correctamente.\n");
    } else {
        fprintf(stderr, "Error al insertar datos.\n");
    }

    // Cerrar la conexión
    cerrar_conexion(conexion);
    printf("Conexión cerrada.\n");

    return 0;
}
