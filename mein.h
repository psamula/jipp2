//
// Created by Pawel on 02.02.2022.
//

#ifndef JIPP2_MEIN_H
#define JIPP2_MEIN_H
#include <iostream>
#include <fstream>

#include "../include/Account.h"
#include "../src/AccountFinanse.cpp"
using namespace std;

/**
 * stworz konto
 * @param l  - login
 * @param p  - haslo
 * @param credentials - kontener danych (map)
 */
void createAccount(string l, string p, map<string, string> &credentials);
/**
 * sprawdza czy w bazie danych (pliku) istnieje podany login
 * @param l - login
 * @return -istnieje (true) lub nie (false)
 */
bool checkIfExists(string l);
/**
 * sprawdza, czy do podanego loginu przypisane jest podany haslo
 * @param l - login
 * @param p - haslo
 * @param credentials - kontener
 * @return - tak lub nie
 */
bool checkPassword(string l, string p, map<string, string> &credentials);
/**
 * sprawdza, czy login i haslo pasuja do siebie
 * @param l  - login
 * @param p  - haslo
 * @param credentials - kontener
 * @return - tak lub nie
 */
bool logging(string l, string p, map<string, string> &credentials);
/**
 * sprawdza, czy w podanych stringach wystepuje niedzwolony znak (spacja)
 * @param s - login
 * @param p  - haslo
 * @return  - tak lub nie
 */
bool checkSpace(string s, string p);
/**
 * Wyswietla komunikat o bledzie podczas logowania/rejestracji
 */
void bladLogowania();
/**
 * menu glowne programu
 */
void menu();
/**
 * wczytuje loginy i hasla z bazy danych (pliku) przy uruchomieniu programu
 */
void fillMap();
/**
 * menu po zalogowaniu
 * @param acc - zalogowane konto
 */
void insideMenu(AccountFinanse &acc);
/**
 * funkcja przypomnienia hasla
 * @param l - login
 */
void remindPassword(string l);
/**
 * funkcja zwracajaca pierwszy znak hasla
 * @param l - login
 * @return  - pierwszy znak hasla
 */
char firstChar(string l);
#endif //JIPP2_MEIN_H
