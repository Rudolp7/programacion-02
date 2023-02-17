#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura
struct Usuario {
    char nombre[50];
    char email[50];
    float saldo;
    char password[50];
    char genero;
};

// Función para llenar la estructura y luego imprimir sus valores
void llenar_usuario(struct Usuario *usuario) {
    printf("Ingrese el nombre: ");
    scanf("%s", usuario->nombre);

    printf("Ingrese el email: ");
    scanf("%s", usuario->email);

    printf("Ingrese el saldo: ");
    scanf("%f", &(usuario->saldo));

    printf("Ingrese el password: ");
    scanf("%s", usuario->password);

    printf("Ingrese el genero (M o F): ");
    scanf(" %c", &(usuario->genero));

    // Imprimir los miembros de la estructura
    printf("Nombre: %s\n", usuario->nombre);
    printf("Email: %s\n", usuario->email);
    printf("Saldo: %.2f\n", usuario->saldo);
    printf("Password: %s\n", usuario->password);
    printf("Genero: %c\n", usuario->genero);
}

int main() {
    // Crear una instancia de la estructura Usuario
    struct Usuario usuario;

    // Llamar a la función para llenar los miembros de la estructura y luego imprimirlos
    llenar_usuario(&usuario);

    return 0;
}


