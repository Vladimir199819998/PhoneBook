#include "../include/human.h"

Human::Human() {
    this->name = "no_name";
    this->data.address ="no_address";
    this->data.phone = "no_phone";
}

Human::Human(string n, string addr, string ph) : name(n), data(addr,ph) {}


istream& operator >> (istream& in, Human& human) {
    getline(in, human.name);
    getline(in, human.data.phone);
    getline(in, human.data.address);

    return in;
}

ostream& operator << (ostream& out, const Human& human) {
    cout << "Name: " << human.name << endl;
    cout << "Phone: " << human.data.phone << endl;
    cout << "Address: " << human.data.address << endl;
    return out;
}
