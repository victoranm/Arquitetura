#include <stdio.h>

int result ;

void main() {
result = 0;

asm(".intel_syntax noprefix");	
asm("mov %ax, 4");	
asm("mov %bl, 2");
asm("mul %bl ");
asm("mov result, %ax");
asm(".att_syntax noprefix");

printf("Saida: %u \n", result);
	
	
}