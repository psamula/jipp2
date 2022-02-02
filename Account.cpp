//
// Created by Pawel on 01.02.2022.
//

#include "../include/Account.h"
using namespace std;

vector <string> insideFile;

Account::Account(string login, string password, map <string, string> &credentials) {

    this->login = login;
    this->password = password;
    this->credentials = credentials;

    //login = tempp.first;
    //password = tempp.second;
    //credentials.insert()
}
void Account::changePassword() {
    if (security()) {
        cout <<"Podaj nowe haslo: ";
        string newP;
        cin >> newP;
        this->password = newP;
        this->credentials[this->login] = this->password;
        cout << "Haslo zmienione pomyslnie" << endl;
    }
}
Account::~Account() {
    cout <<"Desttruktor Account" << endl;
}

/*void Account::deleteAccount() {
    int i = 5;
    while (true) {
        if (security() == false) {
            cout <<"Pozostalo prob: " << i << endl;
            --i;
            if (i < 0) {
                cout << "Zbyt duzo nieudanych prob! Wylogowanie..." << endl;
                exit(0);
            }
        } else {
            cout << "Czy na pewno chcesz usunac konto? tak/nie" << endl;
            string ch;
            cin >> ch;
            if (ch == "tak") {
                for (auto itr = credentials.begin(); itr != credentials.end(); itr++) {
                    if (itr->first == this->login) {
                        credentials.erase(itr->first);
                    }

                }

            } else if (ch == "nie") {
                return;
            } else {
                cout << "Bledny input" << endl;
                exit(0);
            }
        }
    }
}*/
bool Account::security() {
    cout << "Podaj haslo: ";
    string inp;
    cin >> inp;
    if (inp == this->password) {
        return true;
    } else {
        cout <<"Bledne haslo" << endl;

    }
    return false;
}


