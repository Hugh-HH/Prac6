#include "Mutator.h"
#include "Rearrange.h"
#include <string>
#include <iostream>

Individual* Rearrange:: mutate(Individual* dna, int k) {

    if(k > (dna->getLength())){
        k = k - (dna->getLength());
    }

    std::string split = dna->getString();
    std::string shiftedStr = split.substr(k - 1) + split.substr(0, k - 1);

return new Individual(shiftedStr);

}
