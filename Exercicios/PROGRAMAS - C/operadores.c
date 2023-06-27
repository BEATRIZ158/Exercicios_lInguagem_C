#include <stdio.h>
#include <stdbool.h>

void main(){

printf("Operador E \n");
printf("V e V = %d \n", true && true);
printf("V e F = %d \n", true && false);
printf("F e V = %d \n", false && true);
printf("F e F = %d \n", false && false);
printf("Operador OU \n");
printf("V e V = %d \n", true || true);
printf("V e F = %d \n", true || false);
printf("F e V = %d \n", false || true);
printf("F e F = %d \n", false || false);
printf("Operador NAO \n");
printf("NAO V = %d \n", !true);
printf("NAO F = %d \n", !false);

}
