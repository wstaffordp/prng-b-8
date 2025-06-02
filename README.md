# PRNG B 8

It's a fast, statistically-strong PRNG with 8-bit integers and a period of 2⁸ to 2⁹.

`prng_b_8()` is the randomization function that generates a 8-bit, pseudorandom, unsigned integer.

It accepts the following argument.

1. `s` is the pointer that contains the state. Each state integer must be initialized with any combination of values.

It's in the same class as Xorshift8 with 1 auxiliary 8-bit state integer.

It has a minimum period of 2⁸ without broken cycles.

It has a maximum period of 2⁹, although no cycle is guaranteed to reach a full 2⁹ period.

Incrementing `b` outside of `prng_b_8()` behaves as an interdimensional jump function that starts a different cycle with a period of at least 2⁸.

Zeroland escapes immediately after generating 1 subsequent number.

It's the fastest 8-bit PRNG that generates numbers individually, has a period of at least 2⁸ and passes statistical tests in `stdin8` PractRand with 4KB of numbers.

I welcome submissions of algorithms in the same class that challenge the aforementioned claim.

As an obligatory disclaimer, it's not a CSPRNG for use in cryptography.
