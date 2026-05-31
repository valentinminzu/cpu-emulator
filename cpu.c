#include "cpu.h"
#include <string.h>
#include <stdio.h>

void cpu_init(CPU *cpu) {
    cpu->A = 0;
    cpu->B = 0;
    cpu->C = 0;
    cpu->D = 0;
    cpu->flags = 0;
    cpu->PC = 0;
    cpu->SP = 0;
    memset(cpu->memory,0,sizeof(cpu->memory));
}

void cpu_dump(CPU *cpu) {
    printf("A = %u\n", cpu->A);
    printf("B = %u\n", cpu->B);
    printf("C = %u\n", cpu->C);
    printf("D = %u\n", cpu->D);
    printf("PC = %u\n", cpu->PC);
    printf("SP = %u\n", cpu->SP);
    printf("flags = %u\n", cpu->flags);
    uint8_t contor = 0, biti = 0;
    for(uint16_t i = 0; i < sizeof(cpu->memory); i++) {
        if(biti == 0) {
            printf("0x%02X: ",contor);
        }
        printf("%02X ",cpu->memory[i]);
        biti++;
        if (biti > 7) {
            printf("\n");
            biti = 0;
            contor = contor + 8;
        }
    }
}