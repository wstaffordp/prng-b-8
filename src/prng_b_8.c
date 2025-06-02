#include "prng_b_8.h"

uint8_t prng_b_8(struct prng_b_8_s *s) {
  s->a = ((s->a << 5) | (s->a >> 3)) + 111;
  s->b += 11;
  return s->a ^ s->b;
}
