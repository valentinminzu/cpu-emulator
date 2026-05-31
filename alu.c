#include "cpu.h"

uint8_t alu_add(uint8_t A, uint8_t B, uint8_t *flags) {
    if((A + B) > 255) {
        flags[0] |= FLAG_C;
    }
    else {
        flags[0] &= ~FLAG_C;
    }
    if((A + B) == 0) {
        flags[0] |= FLAG_Z;
    }
    else {
        flags[0] &= ~FLAG_Z;
    }
    return A + B;
}

uint8_t alu_sub(uint8_t A, uint8_t B, uint8_t *flags) {
    if((A - B) == 0) {
        flags[0] |= FLAG_Z;
    }
    else {
        flags[0] &= ~FLAG_Z;
    }
    if(A < B) {
        flags[0] |= FLAG_C;
    }
    else {
        flags[0] &= ~FLAG_C;
    }
    return A - B;
}

void alu_cmp(uint8_t A, uint8_t B, uint8_t *flags) {
    if ((A - B) == 0) {
        flags[0] |= FLAG_Z;
    }
    else {
        flags[0] &= ~FLAG_Z;
    }
}

uint8_t alu_and(uint8_t A, uint8_t B, uint8_t *flags) {
    if ((A & B) == 0) {
        flags[0] |= FLAG_Z;
    }
    else {
        flags[0] &= ~FLAG_Z;
    }
    return A & B;
}

uint8_t alu_or(uint8_t A, uint8_t B, uint8_t *flags) {
    if ((A | B) == 0) {
        flags[0] |= FLAG_Z;
    }
    else {
        flags[0] &= ~FLAG_Z;
    }
    return A | B;
}

uint8_t alu_xor(uint8_t A, uint8_t B, uint8_t *flags) {
    if ((A ^ B) == 0) {
        flags[0] |= FLAG_Z;
    }
    else {
        flags[0] &= ~FLAG_Z;
    }
    return A ^ B;
}

uint8_t alu_not(uint8_t A, uint8_t *flags) {
    if (~A == 0) {
        flags[0] |= FLAG_Z;
    }
    else {
        flags[0] &= ~FLAG_Z;
    }
    return ~A;
}