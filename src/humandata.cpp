#include "../include/humandata.h"

HumanData::HumanData() {
    this->phone = "no_phone";
    this->address = "no_address";
}

HumanData::HumanData(string addr, string ph) : address(addr), phone(ph) {}

istream& operator >> (istream& in, HumanData& data) {
    getline(in, data.address);
    getline(in, data.phone);
    return in;
}

ostream& operator << (ostream& out, const HumanData& data) {
    cout << data.address << endl;
    cout << data.phone << endl;
}
