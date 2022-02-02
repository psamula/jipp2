//
// Created by Pawel on 02.02.2022.
//

#include "../include/Account.h"

/*AccountFinanse::AccountFinanse(string login, string password, double stanKonta, map<string, string> &credentials) {
    this->login = login;
    this->password = password;
    this->stanKonta = stanKonta;
    this->credentials = credentials;
    cout << "Stan konta: " << this->stanKonta << endl;
}*/

void AccountFinanse::zasilKonto(int srodki) {
    this->stanKonta += srodki;
}
void AccountFinanse::zasilKonto(double srodki) {
    this->stanKonta += srodki;
}
void AccountFinanse::operator>=(AccountFinanse acc) {
    if (acc.stanKonta >= acc.biletNormalny1h) cout <<"Stac cie na: bilet normalny 1h oraz ulgowy 1h" << endl;
    else if (acc.stanKonta >= acc.biletUlgowy1h) cout << "Stac cie na: bilet ulgowy 1h" << endl;
    else cout << "Nie stac cie na zaden bilet. Doladuj srodki" << endl;
}

double AccountFinanse::getStanKonta() {
    return this->stanKonta;
}

void AccountFinanse::kupBiletNormalny1h() {
    if (this->getStanKonta() >= this->biletNormalny1h) {
        this->stanKonta -= this->biletNormalny1h;
    } else cout << "Nie masz wystarczajacych srodkow na ten zakup!" << endl;
}
void AccountFinanse::kupBiletUlgowy1h() {
    if (this->getStanKonta() >= this->biletUlgowy1h) {
        this->stanKonta -= this->biletUlgowy1h;
    } else cout << "Nie masz wystarczajacych srodkow na ten zakup!" << endl;
}
AccountFinanse::~AccountFinanse() {
    cout << "Destruktor AccountFinanse" << endl;
}


