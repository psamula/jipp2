#include <iostream>
#include <string>


using namespace std;

float add (float a, float b) {
    return a + b;
}
float subtract (float a, float b) {
    return a - b;
}
float volume (float a, float b, )

int main(int argc, char* argv[]) {
    int *n = new int;
    int c = stoi(argv[1]);
    cout << c << " " << argv[1] << endl;

    int k;
    for (int i = 0; i < argc; i++) {
        cout << argv[i] <<endl;
    }
    delete n;
    int tab[3] = {3, 2, 1};
    int *tabD = new int[5];
    delete[] tabD;

    int **tabDd = new int*[5];

    for (int i = 0; i < 5; ++i) {
        tabDd[i] = new int[5];
    }
    for (int i = 0; i < 5; ++i) {
        delete[] tabDd[i];
    }
    delete[] tabDd;

    return 0;
}

