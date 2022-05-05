#ifndef REARRANGE
#define REARRANGE 
#include "Mutator.h"

class Rearrange: public Mutator {

    public:
        virtual Individual* mutate(Individual* dna, int k);

    private:

};
#endif