#ifndef NEWPHONEBOOK_HUMANDATA_H
#define NEWPHONEBOOK_HUMANDATA_H

#include <string>
#include <iostream>
using namespace std;

struct HumanData
{
    string address;
    string phone;
    HumanData();
    HumanData(string addr, string ph);
};

istream& operator >> (istream& in, HumanData& data);
ostream& operator << (ostream& out, const HumanData& data);


#endif //NEWPHONEBOOK_HUMANDATA_H
