#include "cpu.h"

int main(void) {
    
    CPU* c;
    
    cpu_init(c);
    cpu_dump(c);
    
    return 0;
}