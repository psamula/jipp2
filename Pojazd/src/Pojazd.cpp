//
// Created by pawel on 08.11.2021.
//

#include "../include/Pojazd.h"
#include <iostream>


Pojazd::Pojazd(const string &nrRejestracyjny, const string &nazwa, int miejsca, const string &marka, const string &typ)
        : nrRejestracyjny(nrRejestracyjny), nazwa(nazwa), miejsca(miejsca), marka(marka), typ(typ) {
    this->dane = new string[]

}
void Pojazd::changeInfo(int miejsce, string newInfo) {
    this->dane[miejsce] = newInfo;



}

void Pojazd::toString() {
    cout << this->nrRejestracyjny << this->nazwa << this->dane << this->marka << this->miejsca << this.typ << endl;
}

