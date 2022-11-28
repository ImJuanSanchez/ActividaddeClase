#include <stdio.h>

int main(){
	
    char texto [200];

    printf("Ingrese cualquier texto\n");
    scanf("%[^\n]",texto);
    printf("El texto ingresado fue: %s",texto);

    return 0;
}
