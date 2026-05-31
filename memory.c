#include "cpu.h"

uint8_t memory_read(uint16_t adresa, CPU *c) {
    if(adresa > 255) {
        printf("EROARE: adresa %u invalida\n", adresa);
        return 0;
    }
    return c->memory[adresa];
}

void memory_write(uint16_t adresa, uint8_t valoare, CPU *c) {
    if(adresa > 255) {
        printf("EROARE: adresa %u invalida\n", adresa);
        return;
    }
    else {
        c->memory[adresa] = valoare;
    }
}