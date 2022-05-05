#include "Individual.h" 
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
#include <string>
#include <iostream>

Individual* execute(Individual* indPtr, Mutator* mPtr, int k) {
    return mPtr->mutate(indPtr, k);
}

int main(){

    std::string binarystr1;
    std::string binarystr2;
    int k1;
    int k2;

    std::cin >> binarystr1 >> k1 >> binarystr2 >> k2;

    Individual* dna1 = new Individual(binarystr1);
    Individual* dna2 = new Individual(binarystr2);

    Mutator* mu1 = new BitFlip();
    Mutator* mu2 = new Rearrange();

    Individual* dnaMu1 = execute(dna1, mu1, k1);
    Individual* dnaMu2 = execute(dna2, mu2, k2);

    std::cout << dnaMu1->getString() << " " << dnaMu2->getString() << " " << dnaMu2->getMaxOnes() << std::endl;
   
return 0;
}


