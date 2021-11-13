//
// Created by pawel on 08.11.2021.
//

#ifndef JIPP2_POJAZD_H
#define JIPP2_POJAZD_H
#include <cstring>
#include <string>
using namespace std;

class Pojazd {
private:
    string nrRejestracyjny;
    string nazwa;
    int miejsca;
    string marka;
    string typ;
    string* dane;


public:
    Pojazd(const string &nrRejestracyjny, const string &nazwa, int miejsca, const string &marka, const string &typ);
    void toString();
    void changeInfo(int miejsce);
};


#endif //JIPP2_POJAZD_H
