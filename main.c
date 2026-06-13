#include "cpu.h"
#include <stdio.h>

int main(void) {
    
    CPU* c;
    
    cpu_init(c);
    
    c->registre[0] = 42;
    c->memory[0] = 0xFF;
    c->memory[1] = 0xAB;
    
    
    memory_write(15,20,c);
    
    uint8_t citire;
    citire = memory_read(15,c);
    printf("adresa 15: %d\n",citire);
    
    cpu_dump(c);
    
    return 0;
}