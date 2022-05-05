#include "Mutator.h"
#include "BitFlipProb.h"
#include <cstdlib>

BitFlipProb::BitFlipProb(double prob){

    if(prob >= 0 && prob <= 1){
        p = prob;
    }
    else{
        prob = 0.0;
    }
    
}

Individual* BitFlipProb::mutate(Individual* dna, int k) {

    for(int i = 0; i < dna->getLength(); i++) {
        
        if( rand()%100 < (p*100)) {
            dna->flipBit(i);
        }

    }
    return dna;
}



