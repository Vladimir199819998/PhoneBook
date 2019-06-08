#ifndef NEWPHONEBOOK_HUMAN_H
#define NEWPHONEBOOK_HUMAN_H

#include "humandata.h"
#include <fstream>

struct Human{
    string name;
    HumanData data;
    Human();
    Human(string n, string addr, string ph);
};

istream& operator >> (istream& in, Human& human);
ostream& operator << (ostream& out, const Human& human);



#endif //NEWPHONEBOOK_HUMAN_H
