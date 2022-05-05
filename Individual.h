#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include<string>

class Individual {

    public:
        Individual(int length);
        Individual(std::string list);

        std::string getString();

        int getBit(int pos);

        void flipBit(int pos);

        int getMaxOnes();

        int getLength();

    private:
        std::string binaryString;
        int length;
        std::string copyOfList;

};
#endif