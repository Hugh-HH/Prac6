#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H
#include "Mutator.h"

class BitFlipProb: public Mutator {

    public:
        virtual Individual* mutate(Individual* dna, int k);
        BitFlipProb(double prob);

    private:
        double p;
};
#endif