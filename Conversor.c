#include <stdio.h>

int main() {
    int opcion;
    float cantidad, resultado;
    
    printf("Bienvenido al conversor de monedas\n");
    printf("1. Quetzales (GTQ)\n");
    printf("2. Dólares (USD)\n");
    printf("3. Euros (EUR)\n");
    printf("Elija la moneda de entrada: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("Ingrese la cantidad en Quetzales (GTQ): ");
            scanf("%f", &cantidad);
            resultado = cantidad / 7.72; // Tasa de cambio de Quetzales a Dólares
            printf("%.2f GTQ equivale a %.2f USD\n", cantidad, resultado);
            break;
        case 2:
            printf("Ingrese la cantidad en Dólares (USD): ");
            scanf("%f", &cantidad);
            resultado = cantidad * 1.0; // Tasa de cambio de Dólares a Dólares (1 a 1)
            printf("%.2f USD equivale a %.2f USD\n", cantidad, resultado);
            break;
        case 3:
            printf("Ingrese la cantidad en Euros (EUR): ");
            scanf("%f", &cantidad);
            resultado = cantidad * 1.13; // Tasa de cambio de Euros a Dólares 
            printf("%.2f EUR equivale a %.2f USD\n", cantidad, resultado);
            break;
        default:
            printf("Opción no válida\n");
    }

    return 0;
}
