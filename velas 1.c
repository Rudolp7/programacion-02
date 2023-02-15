#include <stdio.h>

int velas(int velas_iniciales, int residuos) {
    int velas_completas = velas_iniciales;
    int nuevos_residuos = velas_iniciales;
    
    while (nuevos_residuos >= 2) {
        int nuevas_velas = nuevos_residuos / 2;
        velas_completas += nuevas_velas;
        nuevos_residuos = nuevas_velas + (nuevos_residuos % 2);
    }
    
    return velas_completas;
}

int main() {
    int velas_iniciales, residuos, resultado;
    
    printf("Ingrese el numero de velas iniciales: ");
    scanf("%d", &velas_iniciales);
    
    printf("Ingrese el numero de residuos: ");
    scanf("%d", &residuos);
    
    resultado = velas(velas_iniciales, residuos);
    printf("El numero total de velas completas que se pueden quemar es: %d\n", resultado);

    return 0;
}


