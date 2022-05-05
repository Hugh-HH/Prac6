#include "Mutator.h"
#include "BitFlip.h"

Individual* BitFlip::mutate(Individual* dna, int k) {
    Individual* flip = new Individual(*dna);

    while (k > flip->getLength()) {
        k = (k - flip->getLength());
    }


    flip->flipBit(k - 1);

return flip;
}