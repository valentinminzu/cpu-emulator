#ifndef CPU_H
#define CPU_H

#include <stdint.h>

typedef struct {
    uint8_t registre[4]; // registri generali
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

uint8_t alu_add(uint8_t A, uint8_t B, uint8_t *flags);
uint8_t alu_sub(uint8_t A, uint8_t B, uint8_t *flags);
void alu_cmp(uint8_t A, uint8_t B, uint8_t *flags);
uint8_t alu_and(uint8_t A, uint8_t B, uint8_t *flags);
uint8_t alu_or(uint8_t A, uint8_t B, uint8_t *flags);
uint8_t alu_xor(uint8_t A, uint8_t B, uint8_t *flags);
uint8_t alu_not(uint8_t A, uint8_t *flags);

uint8_t memory_read(uint16_t adresa, CPU *c);
void memory_write(uint16_t adresa, uint8_t valoare, CPU *c);
#endif