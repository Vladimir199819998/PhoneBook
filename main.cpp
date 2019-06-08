#include <iostream>
#include <fstream>
#include "include/human.h"
#include "include/humandata.h"
#include <vector>
#include <map>

bool readStudents(const char* filename, map<string, HumanData>& students);


int main() {
    map<string, HumanData> students;
    readStudents("Students", students);

    string input;
    cout << "Введите фамилю, имя и отчество через пробел: " << endl;
    getline(cin, input);
    string name = input;
    map<string, HumanData>::const_iterator it = students.find(name);
    if (it != students.end()) {
        cout << "Человек найден!" << endl;
        cout << it->first << endl;
        cout << it->second << endl;
    } else {
        cout << "Человек не найден!" << endl;
    }
    return 0;
}

bool readStudents(const char* filename, map<string, HumanData>& students) {
    ifstream in(filename);
    if (in.fail()) {
        throw runtime_error("Cannot open the file!");
    }
    HumanData data;
    string name;
    getline(in, name) >> data;
    while (!in.fail()) {
        students[name] = data;
        getline(in, name) >> data;
    }
    return true;
}