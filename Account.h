//
// Created by Pawel on 01.02.2022.
//

#ifndef JIPP2_ACCOUNT_H
#define JIPP2_ACCOUNT_H
#include <map>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;
/**
 * klasa z funkcja obliczajaca koszt jednej minuty jazdy z biletem
 */
class priceMonitor {
public:

    virtual double wspolczynnik() const = 0;
};
/**
 * Klasa zawierajaca podstawowe wlasciwosci konta
 */
class Account : public priceMonitor {
protected:
    string password;
    string login;
    map <string, string> credentials;
public:
    Account(string login, string password, map<string,string> &credentials);
    ~Account();
    bool security();

    void changePassword();
    double biletNormalny1h = 3.20;
    double biletUlgowy1h = 1.60;
    virtual double wspolczynnik() const {return biletUlgowy1h / 60;}
};
/**
 * Klasa zawierajaca rozszerzone wlasciwosci konta, kupno biletow, symulacja kupna, zasilanie konta
 */
class AccountFinanse : public Account {
protected:
    double stanKonta = 0;
    string password;

public:
    AccountFinanse(string login, string password, map<string, string> &credentials)
        : Account(login, password, credentials) {}
        ~AccountFinanse();
    void zasilKonto(int srodki);
    void zasilKonto(double srodki);
    void operator >=(AccountFinanse acc);
    double biletNormalny1h = 3.20;
    double biletUlgowy1h = 1.60;
    double getStanKonta();
    void kupBiletNormalny1h();
    void kupBiletUlgowy1h();

};


#endif //JIPP2_ACCOUNT_H
