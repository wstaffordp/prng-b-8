#ifndef PRNG_B_8_H
#define PRNG_B_8_H

#include <stdint.h>

struct prng_b_8_s {
  uint8_t a;
  uint8_t b;
};

uint8_t prng_b_8(struct prng_b_8_s *s);

#endif
