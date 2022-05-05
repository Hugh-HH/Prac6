#ifndef MUTATOR_H
#define MUTATOR_H
#include <vector>
#include <string>
#include "Individual.h"

class Mutator {

    public:
        Mutator(){};
            virtual Individual* mutate(Individual* dna, int k) =0;

    private:
     
};
#endif
