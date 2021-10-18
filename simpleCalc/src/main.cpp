#include <iostream>
#include <string>
#include <cstring>
#include "../include/calc.h"
using namespace std;


int main(int argc, char* argv[]) {

    if (argc == 4) {
        if (strcmp(argv[1], "add") == 0) {
            cout << add(stoi(argv[2]), stoi(argv[3])) << endl;
        }
        else if (strcmp(argv[1], "subtract") == 0) cout << subtract(stoi(argv[2]), stoi(argv[3])) << endl;
    }
    else if (argc == 6) {
        if (argv[1] == "volume") cout << volume(stoi(argv[2]), stoi(argv[3]), stoi(argv[4]), stoi(argv[5])) << endl;
    }
    //else if (argv[0] == "help");
    else {
        cout << "Zly input" << endl;
    }
}
/**
 * funkcja, ktora oblicza wynik dodawania a i b
 * @param a składnik sumy
 * @param b składnik sumy
 * @return suma a i b
 */
int add (int a, int b) {
    return (a+b);
}
/**
 * funkcja, ktora oblicza wynik odejmowania a od b
 * @param a - odjemnik
 * @param b - odjemna
 * @return  - roznica
 */
int subtract (int a, int b) {
    return (a-b);
}
/**
 * funkcja, która oblicza objetosc graniastoslupa o podstawie trapezu
 * @param a - jeden z bokow podstawy graniastoslupa
 * @param b - jeden z bokow podstawy graniastoslupa
 * @param c - wysokosc podstawy graniastoslupa
 * @param h - wysokosc graniastoslupa
 * @return - objetosc
 */
int volume (int a, int b, int c, int h) {
    return ((a+b)/2 * c * h);
}