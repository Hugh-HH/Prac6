#include "Individual.h"
#include <vector>

Individual::Individual(int length) {
    for(int i=0; i < length; i++){
        binaryString.push_back(0);
    }
}

Individual::Individual(std::string list){
    binaryString = list;
    length = list.size();
}

std::string Individual::getString() {
    return binaryString;
}

int Individual::getBit(int pos) {
    return binaryString[pos];
}

void Individual::flipBit(int pos) {
    if(binaryString[pos] == 0) {
        binaryString[pos] = 1;
        return;
    }
    binaryString[pos] = 0;
    return;

}

int Individual::getMaxOnes() {
    int count = 0;
    int max = 0;
    std::vector<int> holder;

    for(int i = 1; i < binaryString.size(); i++){

        if(binaryString[i] == 1){

            if(binaryString[i] == 0) {
                count = 0;
            }

            else {
                count++;

                if(count > max){
                    max = count;
                }
            }   
        }
    }
    return max;
}

int Individual::getLength() {
    return binaryString.size();
}