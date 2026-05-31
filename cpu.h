#ifndef CPU_H
#define CPU_H

#include <stdint.h>

typedef struct {
    uint8_t A, B, C, D; // registri generali
    uint16_t PC; // program counter
    uint16_t SP; // stack pointer
    uint8_t flags; // flag-uri
    uint8_t memory[256]; // ram - 256 octeti
} CPU;

#define FLAG_Z 0x01 // zero
#define FLAG_C 0x02 // carry
#define FLAG_N 0x04 // negative
#define FLAG_V 0x08 // overflow

void cpu_init(CPU *cpu);
void cpu_run(CPU *cpu);
void cpu_step(CPU *cpu);
void cpu_dump(CPU *cpu);

#endif