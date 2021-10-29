#include <matrixLib.h>
#include "../matrixLib/include/matrixLib.h"

using namespace std;

int main (int argc, char* argv[]) {
    if (argc == 2) {
        if (strcmp(argv[1], "addMatrix") == 0) {
            cout << "Jakiego typu macierz, int czy double?" << endl;
            char choice[10];
            cin >> choice;

            cout << "Podaj liczbe wierszy i kolumn pierwszej macierzy" << endl;
            int rows;
            int cols;
            cin >> rows;
            cin >> cols;

            if (strcmp(choice, "double") == 0) {

                double **mat = createDoubleArray(rows, cols);
                mat = passDoubleTheMatrix(rows, cols);
                double **mat2 = createDoubleArray(rows, cols);
                mat2 = passDoubleTheMatrix(rows, cols);

                double **final = addMatrix(mat, mat2, rows, cols);
                printArray(final, rows, cols);
            } else if (strcmp(choice, "int") == 0) {

            }
                int **mat = createIntArray(rows, cols);
                mat = passIntTheMatrix(rows, cols);
                int **mat2 = createIntArray(rows, cols);
                mat2 = passIntTheMatrix(rows, cols);

                int **final = addMatrix(mat, mat2, rows, cols);
                printArray(final, rows, cols);
        }
        else if (strcmp(argv[1], "subtractMatrix") == 0) {
            cout << "Jakiego typu macierz, int czy double?" << endl;
            char choice[10];
            cin >> choice;

            cout << "Podaj liczbe wierszy i kolumn pierwszej macierzy" << endl;

            int rows;
            int cols;
            cin >> rows;
            cin >> cols;

            if (strcmp(choice, "double") == 0) {

                double **mat = createDoubleArray(rows, cols);
                mat = passDoubleTheMatrix(rows, cols);
                double **mat2 = createDoubleArray(rows, cols);
                mat2 = passDoubleTheMatrix(rows, cols);

                double **final = subtractMatrix(mat, mat2, rows, cols);
                printArray(final, rows, cols);

            } else if (strcmp(choice, "int") == 0) {
                int **mat = createIntArray(rows, cols);
                mat = passIntTheMatrix(rows, cols);

                int **mat2 = createIntArray(rows, cols);
                mat2 = passIntTheMatrix(rows, cols);

                int **final = subtractMatrix(mat, mat2, rows, cols);
                printArray(final, rows, cols);

            }


        }
        else if (strcmp(argv[1], "multiplyMatrix") == 0) {
            cout << "Podaj liczbe wierszy i kolumn pierwszej macierzy" << endl;
            int rows;
            int cols;
            cin >> rows;
            cin >> cols;

            cout << "Podaj liczbe wierszy i kolumn drugiej macierzy" << endl;
            int rows2;
            int cols2;
            cin >> rows2;
            cin >> cols2;

            if (cols != rows2) {
                cout << "Liczba wierszy pierwszej macierzy musi byc rowna liczbie kolumn drugiej!" << endl;
            }
            else {
                cout << "Jakiego typu macierz, int czy double?" << endl;
                char choice[10];
                cin >> choice;
                if (strcmp(choice, "double") == 0) {

                    double **mat = createDoubleArray(rows, cols);

                    mat = passDoubleTheMatrix(rows, cols);


                    double **mat2 = createDoubleArray(rows2, cols2);
                    mat2 = passDoubleTheMatrix(rows2, cols2);

                    double **final = multiplyMatrix(mat, mat2, rows, cols, cols2);

                    printArray(final, rows, cols2);

                } else if (strcmp(choice, "int") == 0) {

                    int **mat = createIntArray(rows, cols);

                    mat = passIntTheMatrix(rows, cols);


                    int **mat2 = createIntArray(rows2, cols2);
                    mat2 = passIntTheMatrix(rows2, cols2);

                    int **final = multiplyMatrix(mat, mat2, rows, cols, cols2);

                    printArray(final, rows, cols2);

                }

            }


        }
        else if (strcmp(argv[1], "multiplyByScalar") == 0) {
            cout << "Jakiego typu macierz, int czy double?" << endl;
            char choice[10];
            cin >> choice;
            if (strcmp(choice, "double") == 0) {
                cout << "Ile wierszy i kolumn ma miec macierz?" << endl;
                int rows, cols;
                cin >> rows;
                cin >> cols;

                double **mat = createDoubleArray(rows, cols);

                mat = passDoubleTheMatrix(rows, cols);

                cout << "Podaj liczbe, przez ktora chcesz pomnozyc macierz" << endl;

                int scalar;
                cin >> scalar;

                double **final = multiplyByScalar(mat, rows, cols, scalar);
                printArray(final, rows, cols);
            }
            else if (strcmp(choice, "int") == 0) {

                cout << "Ile wierszy i kolumn ma miec macierz?" << endl;
                int rows, cols;
                cin >> rows;
                cin >> cols;

                int **mat = createIntArray(rows, cols);

                mat = passIntTheMatrix(rows, cols);

                cout << "Podaj liczbe, przez ktora chcesz pomnozyc macierz" << endl;

                int scalar;
                cin >> scalar;

                int **final = multiplyByScalar(mat, rows, cols, scalar);
                printArray(final, rows, cols);
            }



        }
        else {
            cout << "Zly input" << endl;
        }
    }
}