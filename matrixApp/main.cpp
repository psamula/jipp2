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
            checkInput();
            cin >> cols;
            checkInput();


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
            checkInput();
            cin >> cols;
            checkInput();

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
            checkInput();
            cin >> cols;
            checkInput();

            cout << "Podaj liczbe wierszy i kolumn drugiej macierzy" << endl;
            int rows2;
            int cols2;
            cin >> rows2;
            checkInput();
            cin >> cols2;
            checkInput();

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
                checkInput();
                cin >> cols;
                checkInput();

                double **mat = createDoubleArray(rows, cols);

                mat = passDoubleTheMatrix(rows, cols);

                cout << "Podaj liczbe, przez ktora chcesz pomnozyc macierz" << endl;

                int scalar;
                cin >> scalar;
                checkInput();

                double **final = multiplyByScalar(mat, rows, cols, scalar);
                printArray(final, rows, cols);
            }
            else if (strcmp(choice, "int") == 0) {

                cout << "Ile wierszy i kolumn ma miec macierz?" << endl;
                int rows, cols;
                cin >> rows;
                checkInput();
                cin >> cols;
                checkInput();

                int **mat = createIntArray(rows, cols);

                mat = passIntTheMatrix(rows, cols);

                cout << "Podaj liczbe, przez ktora chcesz pomnozyc macierz" << endl;

                int scalar;
                cin >> scalar;
                checkInput();
                int **final = multiplyByScalar(mat, rows, cols, scalar);
                printArray(final, rows, cols);
            }



        }
        else if (strcmp(argv[1], "transpozeMatrix") == 0) {
            cout << "Jakiego typu macierz, int czy double?" << endl;
            char choice[10];
            cin >> choice;

            if (strcmp(choice, "double") == 0) {
                cout << "Ile wierszy i kolumn ma miec transponowana macierz?" << endl;
                int rows, cols;
                cin >> rows;
                checkInput();
                cin >> cols;
                checkInput();

                double **mat = createDoubleArray(rows, cols);

                mat = passDoubleTheMatrix(rows, cols);

                double **final = transpozeMatrix(mat, rows, cols);
                printArray(final, cols, rows);

            } else if (strcmp(choice, "int") == 0) {
                cout << "Ile wierszy i kolumn ma miec transponowana macierz?" << endl;
                int rows, cols;
                cin >> rows;
                checkInput();
                cin >> cols;
                checkInput();

                int **mat = createIntArray(rows, cols);

                mat = passIntTheMatrix(rows, cols);

                int **final = transpozeMatrix(mat, rows, cols);
                printArray(final, cols, rows);
            }

        }
        else if (strcmp(argv[1], "powerMatrix") == 0) {
            cout << "Ile wierszy i kolumn ma miec macierz?" << endl;
            int rows, cols;
            cin >> rows;
            checkInput();
            cin >> cols;
            checkInput();
            if (cols != rows) {
                cout << "Potegjemy tylko macierze kwadratowe!" << endl;
                return 0;
            }
            cout << "Jakiego typu macierz, int czy double?" << endl;
            char choice[10];
            cin >> choice;

            if (strcmp(choice, "double") == 0) {


                double **mat = createDoubleArray(rows, cols);

                mat = passDoubleTheMatrix(rows, cols);

                cout << "Do ktorej potegi?" << endl;
                unsigned int potega;
                cin >> potega;
                checkInput();
                double **final = powerMatrix(mat, rows, cols, potega);
                printArray(final, cols, rows);

            } else if (strcmp(choice, "int") == 0) {

                int **mat = createIntArray(rows, cols);

                mat = passIntTheMatrix(rows, cols);

                cout << "Do ktorej potegi?" << endl;
                unsigned int potega;
                cin >> potega;
                checkInput();
                int **final = powerMatrix(mat, rows, cols, potega);
                printArray(final, cols, rows);
            }

        }
        else if (strcmp(argv[1], "determinantMatrix") == 0) {
            cout << "Ile wierszy i kolumn ma miec macierz?" << endl;
            int rows, cols;
            cin >> rows;
            checkInput();
            cin >> cols;
            checkInput();
            if (rows != cols) {
                cout << "Macierz musi byc kwadratowa!" << endl;
                return 0;
            }
            cout << "Jakiego typu macierz, int czy double?" << endl;
            char choice[10];
            cin >> choice;

            if (strcmp(choice, "double") == 0) {


                double **mat = createDoubleArray(rows, cols);

                mat = passDoubleTheMatrix(rows, cols);


                double det = determinantMatrix(mat, rows);
                cout << det << endl;

            } else if (strcmp(choice, "int") == 0) {

                int **mat = createIntArray(rows, cols);

                mat = passIntTheMatrix(rows, cols);


                int det = determinantMatrix(mat, rows);
                cout << det << endl;
            }

        }
        else if (strcmp(argv[1], "matrixIsDiagonal") == 0) {
            cout << "Ile wierszy i kolumn ma miec macierz?" << endl;
            int rows, cols;
            cin >> rows;
            checkInput();
            cin >> cols;
            checkInput();
            if (rows != cols) {
                cout << "Macierz musi byc kwadratowa!" << endl;
                return 0;
            }
            cout << "Jakiego typu macierz, int czy double?" << endl;
            char choice[10];
            cin >> choice;

            if (strcmp(choice, "double") == 0) {


                double **mat = createDoubleArray(rows, cols);

                mat = passDoubleTheMatrix(rows, cols);

                if (matrixIsDiagonal(mat, rows, cols) == true) cout << "Macierz jest diagonalna" << endl;
                else cout << "Macierz nie jest diagonalna" << endl;

            } else if (strcmp(choice, "int") == 0) {

                int **mat = createIntArray(rows, cols);

                mat = passIntTheMatrix(rows, cols);

                if (matrixIsDiagonal(mat, rows, cols) == true) cout << "Macierz jest diagonalna" << endl;
                else cout << "Macierz nie jest diagonalna" << endl;
            }

        }
        else if (strcmp(argv[1], "sortRow") == 0) {
            cout << "Jakiego typu macierz, int czy double?" << endl;
            char choice[10];
            cin >> choice;
            checkInput();
            cout << "Ile kolumn ma wiersz?" << endl;
            int cols;
            cin >> cols;
            checkInput();

            if (strcmp(choice, "double") == 0) {
                cout << "Podaj wiersz" << endl;
                double *final = new double[cols];
                for (int i = 0; i < cols; i++) {
                    cin >> final[i];
                }
                sortRow(final, cols);
                for (int i = 0; i < cols; i++) {
                    cout << final[i] << " " << endl;
                }
            }
            else if (strcmp(choice, "int") == 0) {
                cout << "Podaj wiersz" << endl;
                int *final = new int[cols];
                for (int i = 0; i < cols; i++) {
                    cin >> final[i];
                }
                sortRow(final, cols);
                for (int i = 0; i < cols; i++) {
                    cout << final[i] << " " << endl;
                }
            }

        }
        else if (strcmp(argv[1], "sortRowsInMatrix") == 0) {
            cout << "Ile wierszy i kolumn ma miec macierz?" << endl;
            int rows, cols;
            cin >> rows;
            checkInput();
            cin >> cols;
            checkInput();
            cout << "Jakiego typu macierz, int czy double?" << endl;
            char choice[10];
            cin >> choice;

            if (strcmp(choice, "double") == 0) {


                double **mat = createDoubleArray(rows, cols);

                mat = passDoubleTheMatrix(rows, cols);

                sortRowsInMatrix(mat, rows, cols);
                printArray(mat, rows, cols);

            } else if (strcmp(choice, "int") == 0) {

                int **mat = createIntArray(rows, cols);

                mat = passIntTheMatrix(rows, cols);

                sortRowsInMatrix(mat, rows, cols);
                printArray(mat, rows, cols);
            }
        }
        else if (strcmp (argv[1], "help") == 0) {
            help();
        }
        else {
            help();
        }
    }
}
