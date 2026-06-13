#include "cpu.h"
#include <string.h>
#include <stdio.h>

void cpu_init(CPU *cpu) {
    memset(cpu->registre,0,sizeof(cpu->registre));
    cpu->flags = 0;
    cpu->PC = 0;
    cpu->SP = 0;
    memset(cpu->memory,0,sizeof(cpu->memory));
}

void cpu_dump(CPU *cpu) {
    char *nume[] = {"A", "B", "C", "D"};
    for (int i = 0; i < 4; i++) {
        printf("%s = %u\n",nume[i],cpu->registre[i]);
    }
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

void cpu_step(CPU *cpu) {
    uint8_t opcode;

    opcode = memory_read(cpu->PC, cpu);
    cpu->PC++;

    switch(opcode) {
        case 0x01: { //MOV
            uint8_t destinatie = memory_read(cpu->PC, cpu);
            cpu->PC++;
            uint8_t sursa = memory_read(cpu->PC,cpu);
            cpu->PC++;
            cpu->registre[destinatie] = cpu->registre[sursa];
            break;
        }
        case 0x02: { //ADD
            uint8_t destinatie = memory_read(cpu->PC, cpu);
            cpu->PC++;
            uint8_t sursa = memory_read(cpu->PC,cpu);
            cpu->PC++;
            cpu->registre[destinatie] = alu_add(cpu->registre[destinatie], cpu->registre[sursa], &cpu->flags);
            break;
        }
        case 0x03: {
            //
        }
    }
}