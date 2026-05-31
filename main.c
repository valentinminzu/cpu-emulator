#include "cpu.h"

int main(void) {
    
    CPU* c;
    
    cpu_init(c);
    
    c->A = 42;
    c->memory[0] = 0xFF;
    c->memory[1] = 0xAB;
    
    cpu_dump(c);
    
    return 0;
}