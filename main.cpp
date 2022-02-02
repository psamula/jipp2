#include "../include/mein.h"



string l1, l2;
string validLogin;
string validPassword;
fstream plik, plik2;
map<string, string> credentials;
int iloscArgumentow;
enum STAT
{
    LOGGED,
    REGISTERED,
    NEUTRAL,
    ERROR,
    HELP

};
STAT STATUS = NEUTRAL;
template <typename T>
double toEuro(T value) {
   return value / 4.57;
}
void manualLogging()
{
    cout << "Podaj dane do konta:" << endl;
    cout << "login:";

    string inputLogin, inputPassword;
    //getline(cin, inputLogin);
    //cout << endl;
    cin >> inputLogin;
    cout << "haslo:";
    //getline(cin, inputPassword);
    //cout << endl;
    cin >> inputPassword;
    if (checkSpace(inputLogin, inputPassword) == true) {
        bladLogowania();
        STATUS = ERROR;
    } else {
        if (logging(inputLogin, inputPassword, credentials) == true) {
            validLogin = inputLogin;
            validPassword = inputPassword;
            STATUS = LOGGED;
        } else STATUS = ERROR;
    }
}
void menu() {
    cout << "Wybierz opcje: \n1. Logowanie \n2. Rejestracja\n3. Przypomnij haslo\n4. Wyjscie" << endl;
    char choice;
    cin >> choice;
    string wybor;
    switch(choice) {
        case '1': {
            if (iloscArgumentow == 3) {
                cout << "Zalogowac z argumentow programu? tak/nie" << endl;
                cin >> wybor;
                if (wybor == "tak") {
                    if (checkSpace(l1, l2) == false) {
                        if (logging(l1, l2, credentials)) {
                            STATUS = LOGGED;
                            validLogin = l1;
                            validPassword = l2;
                        }
                    } else STATUS = ERROR;
                } else if (wybor == "nie") {
                    manualLogging();
                }
            } else {
                manualLogging();
            }
        }
            break;
        case '2': {
            cout << "Wprowadz dane do rejestracji" << endl;
            cout << "login:";
            string inputLogin, inputPassword;
            //getline (cin, inputLogin);
            //cout << endl;
            cin >> inputLogin;
            cout << "haslo:";
            //getline (cin, inputPassword);
            cin >> inputPassword;
            if (checkSpace(inputLogin, inputPassword) == false) {
                createAccount(inputLogin, inputPassword, credentials);
            } else {
                bladLogowania();
                STATUS = ERROR;
            }
        }
            break;
        case '3': {
            cout << "Podaj swoj login" << endl;
            string inp;
            cin >> inp;
            remindPassword(inp);
            STATUS = NEUTRAL;
        }
            break;
        default: {
            cout << "Nieprawidlowy input" << endl;
            STATUS = ERROR;
        }
            break;
        case '4': {
            exit(0);
        }

    }
}
int main(int argc, const char *argv[]) { // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ MAIN @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    iloscArgumentow = argc;
    if (argc == 3) {
        l1 = argv[1];
        l2 = argv[2];
    }
    fillMap();
    while(true) {
        menu();
        switch (STATUS) {
            case LOGGED: {
                cout << "Zalogowano pomyslnie!" << endl;
                Account acc2(validLogin, validPassword, credentials);
                AccountFinanse acc(validLogin, validPassword, credentials);
                while (true) {
                    insideMenu(acc);
                }
            }
                break;
            case REGISTERED: {
                cout << "Zarejestrowano pomyslnie!" << endl;
                menu();
            }
                break;
            case ERROR: {
                bladLogowania();
                menu();
            }
                break;

            case NEUTRAL:
                menu();
                break;
        }
    }

}
void insideMenu(AccountFinanse &acc) {
    cout << "\nWybierz opcje:\n1. Sprawdz stan konta \n2. Doladuj Konto \n"
            "3. Kup bilet normalny (1h) \n4. Kup bilet ulgowy (1h)\n5. Zmien haslo\n6. Sprawdz"
            " aktualny wspolczynnik zl/min \n7. Sprawdz na jakie bilety cie stac\n8. Wyjscie" << endl;
    char select;
    cin >> select;
    switch(select) {
        case '1': {
            double stan = acc.getStanKonta();
            double e = toEuro(stan);
            cout << "Aktualny stan konta: " << acc.getStanKonta() << "zl" << " (" << e <<  "euro)" <<  endl;
        }
            break;
        case '2': {
            cout << "Jaka kwota chcesz zasilic konto?" << endl;
            double kwota;
            cin >> kwota;
            acc.zasilKonto(kwota);
        }
            break;
        case '3': {
            acc.kupBiletNormalny1h();
        }
            break;
        case '4': {
            acc.kupBiletUlgowy1h();
        }
            break;
        case '5': {
            acc.changePassword();
        }
            break;
        case '6': {
            priceMonitor *m = &acc;
            cout << "Za minute jazdy placisz aktualnie: " << m->wspolczynnik() << "zl" << endl;
        }
            break;
        case '7': {
            acc >= acc;
        }
            break;
        case '8': {
            exit(0);
        }
        default:
            cout << "Nieprawidlowy input!" << endl;
            break;

    }
}

void createAccount(string l, string p, map<string, string> &credentials)
{
    if (checkIfExists(l) == false) {
        if(checkSpace(l, p) == false) {
            pair<string, string> tempp(l, p);
            try {
                plik.open("loginDatabase.txt", ios_base::app);
                if (!plik.is_open()) {
                    throw 50;
                }
            } catch(int x) {
                cout << " Blad podczas otwierania pliku. Blad nr: " << x << endl;
                exit(x);
            }
            //plik2.open(passwordDatabase.txt), ios_base::app);
            plik << l << endl;
            plik << p << endl;
            //plik2 << p << endl;
            plik.close();
            //plik2.close();

            credentials.insert(tempp);
            STATUS = REGISTERED;
        } else {
            bladLogowania();
            STATUS = ERROR;
        }
    } else {
        cout << "Podany login jest juz zajety!" << endl;
    }
}

bool checkIfExists(string l) {
    string input;
    plik.open("loginDatabase.txt", ios_base::in);

    while (getline(plik,input)) {
        if (input == l) return true;
    }
    plik.close();
    return false;
}
bool checkSpace(string s, string p) {

    int size = s.length();
    char sArray[size + 1];
    strcpy(sArray, s.c_str());

    int size2 = p.length();
    char pArray[size2 + 1];
    strcpy(pArray, p.c_str());

    for (int i = 0; i < size; i++) {
        if (sArray[i] == ' ' && i != size - 2) return true;
    }
    for (int i = 0; i < size2; i++) {
        if (pArray[i] == ' ' && i != size2 - 2) return true;
    }
    return false;

}
bool logging(string l, string p, map<string, string> &credentials) {
    if (checkIfExists(l) == true) {
        if (checkPassword(l,p,credentials) == true) {

            return true;
        } else {
            bladLogowania();

        }

    }
    return false;
}
bool checkPassword(string l, string p, map<string, string> &credentials) {
    cout << "czek l :" << l << "\nczek p : " << credentials[l] <<endl;
    if (credentials[l] == p) return true;
    return false;

}
void bladLogowania() {
    cout <<"Wprowadzone dane sa nieprawidlowe!" << endl;
}
void fillMap() {
    string input, input2;
    plik.open("loginDatabase.txt", ios_base::in);

    while (getline(plik,input)) {
        //cout << "z pliku : " << input << endl;
        getline(plik, input2);
        //cout << "z pliku 2 : " << input2 << endl;
        pair<string, string> temp;
        temp.first = input;
        temp.second = input2;
        credentials.insert(temp);
    }
    plik.close();
    cout << endl;

}
void remindPassword(string l) {

    if (checkIfExists(l) == true) {
        cout << "Pierwszy znak: " << firstChar(l) << endl;
    }
}
char firstChar(string l) {
    string pass = credentials[l];
    int size = pass.length();
    char sArray[size + 1];
    strcpy(sArray, pass.c_str());
    return sArray[0];
}
