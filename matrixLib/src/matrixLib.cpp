using namespace std;
#include <../include/matrixLib.h>
int N;

double** addMatrix(double** mat, double** mat2, int rows, int cols) {
    double **final = createDoubleArray(rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            final[i][j] = mat[i][j] + mat2[i][j];
        }
    }
    return final;
}
int** addMatrix(int** mat, int** mat2, int rows, int cols) {
    int **final = createIntArray(rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            final[i][j] = mat[i][j] + mat2[i][j];
        }
    }
    return final;
}
double** subtractMatrix(double** mat, double** mat2, int rows, int cols) {
    double **final = createDoubleArray(rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            final[i][j] = mat[i][j] - mat2[i][j];
        }
    }
    return final;
}
int** subtractMatrix(int** mat, int** mat2, int rows, int cols) {
    int **final = createIntArray(rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            final[i][j] = mat[i][j] - mat2[i][j];
        }
    }
    return final;
}
double** multiplyMatrix(double** mat, double** mat2, int rows, int cols, int cols2) {
    double sum = 0;
    double **mat3 = new double *[rows];
    for (int i = 0; i < rows; ++i) {
        mat3[i] = new double[cols2];
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols2; ++j) {
            for (int k = 0; k < cols; ++k) {
                sum += mat[i][k]*mat2[k][j];
            }
            mat3[i][j] = sum;
            sum = 0;
        }
    }
    return mat3;
}
int** multiplyMatrix(int** mat, int** mat2, int rows, int cols, int cols2) {
    int sum = 0;
    int **mat3 = new int *[rows];
    for (int i = 0; i < rows; ++i) {
        mat3[i] = new int[cols2];
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols2; ++j) {
            for (int k = 0; k < cols; ++k) {
                 sum += mat[i][k]*mat2[k][j];
            }
            mat3[i][j] = sum;
            sum = 0;
        }
    }
    return mat3;
}
double** multiplyByScalar(double** mat, int rows, int cols, int scalar) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            mat[i][j] = mat[i][j] * scalar;
        }
    }
    return mat;
}
int** multiplyByScalar(int** mat, int rows, int cols, int scalar) {
    int **final = createIntArray(rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            final[i][j] = mat[i][j] * scalar;

        }
    }
    return final;
}
double** createDoubleArray(int rows, int cols) {
    double **final = new double *[rows];
    for (int i = 0; i < rows; ++i) {
        final[i] = new double[cols];
    }
    return final;
}
int** createIntArray(int rows, int cols) {
    int **final = new int *[rows];
    for (int i = 0; i < rows; ++i) {
        final[i] = new int[cols];
    }
    return final;
}
void printArray(double** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << "" << endl;
    }
}
void printArray(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << "" << endl;
    }
}
double** passDoubleTheMatrix(int rows, int cols) {
    double **final = createDoubleArray(rows, cols);
    cout << "Podaj macierz (wierszami)" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> final[i][j];
            checkInput();
        }
        cout << "" << endl;
    }
    return final;
}

int** passIntTheMatrix(int rows, int cols) {
    int **final = createIntArray(rows, cols);
    cout << "Podaj macierz (wierszami)" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> final[i][j];
            checkInput();
        }
        cout << "" << endl;
    }
    return final;
}

double** transpozeMatrix (double **matrix, int rows, int cols) {
    double **final = createDoubleArray(cols, rows);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            final[j][i] = matrix[i][j];
        }
    }
    return final;
}

int** transpozeMatrix (int **matrix, int rows, int cols) {
    int **final = createIntArray(cols, rows);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            final[j][i] = matrix[i][j];
        }
    }
    return final;
}

double** powerMatrix (double **matrix, int rows, int cols, unsigned int potega) {
    double **final = createDoubleArray(rows, cols);
    if (potega == 1) {
        return matrix;
    } else if (potega >= 2) {
        final = multiplyMatrix(matrix, matrix, rows, cols, cols);
        potega--;
        while (potega > 1) {
            final = multiplyMatrix(final, matrix, rows, cols, cols);
            potega--;
        }
    }
    return final;
}

int** powerMatrix (int **matrix, int rows, int cols, unsigned int potega) {
    int **final = createIntArray(rows, cols);
    if (potega == 1) {
        return matrix;
    } else if (potega >= 2) {
        final = multiplyMatrix(matrix, matrix, rows, cols, cols);
        potega--;
        while (potega > 1) {
            final = multiplyMatrix(final, matrix, rows, cols, cols);
            potega--;
        }
    }
    return final;
}



double **submatrix(double **matrix, unsigned int n, unsigned int x, unsigned int y) {
    double **submatrix = new double *[n - 1];
    int subi = 0;
    for (int i = 0; i < n; i++) {
        submatrix[subi] = new double[n - 1];
        int subj = 0;
        if (i == y) {
            continue;
        }
        for (int j = 0; j < n; j++) {
            if (j == x) {
                continue;
            }
            submatrix[subi][subj] = matrix[i][j];
            subj++;
        }
        subi++;
    }
    return submatrix;
}

int **submatrix(int **matrix, unsigned int n, unsigned int x, unsigned int y) {
    int **submatrix = new int *[n - 1];
    int subi = 0;
    for (int i = 0; i < n; i++) {
        submatrix[subi] = new int[n - 1];
        int subj = 0;
        if (i == y) {
            continue;
        }
        for (int j = 0; j < n; j++) {
            if (j == x) {
                continue;
            }
            submatrix[subi][subj] = matrix[i][j];
            subj++;
        }
        subi++;
    }
    return submatrix;
}

double determinantMatrix(double **matrix, unsigned int n) {
    double det = 0;
    if (n == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[1][0] * matrix[0][1];
    }
    for (int x = 0; x < n; ++x) {
        det += ((x % 2 == 0 ? 1 : -1) * matrix[0][x] * determinantMatrix(submatrix(matrix, n, x, 0), n - 1));
    }

    return det;
}
int determinantMatrix(int **matrix, unsigned int n) {
    int det = 0;
    if (n == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[1][0] * matrix[0][1];
    }
    for (int x = 0; x < n; ++x) {
        det += ((x % 2 == 0 ? 1 : -1) * matrix[0][x] * determinantMatrix(submatrix(matrix, n, x, 0), n - 1));
    }

    return det;
}
bool matrixIsDiagonal (double **matrix, int rows, int cols) {
    bool diagonal = true;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i != j && matrix[i][j] != 0) return false;
        }
    }
    return diagonal;
}
bool matrixIsDiagonal (int **matrix, int rows, int cols) {
    bool diagonal = true;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i != j && matrix[i][j] != 0) return false;
        }
    }
    return diagonal;
}
double **swap (double **matrix, int rows, int cols, double x1, double x2) {
    double **final = createDoubleArray(rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == x1) final[i][j] = x2;
            else if (matrix[i][j] == x2) final[i][j] = x1;
            else final[i][j] = matrix[i][j];

        }
    }
    return final;
}
void swap (double &x1, double &x2) {
    double temp = x1;
    x1 = x2;
    x2 = temp;
}
void swap (int &x1, int &x2) {
    int temp = x1;
    x1 = x2;
    x2 = temp;
}

bool found(double **matrix, int rows, int cols, double x) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == x) return true;
        }
    }
    return false;
}
bool found(int **matrix, int rows, int cols, double x) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == x) return true;
        }
    }
    return false;
}

void sortRow(double row[], int cols) {
    double temp;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < cols - i -1; j++) {
            if (row[j] > row[j+1]) swap(row[j], row[j+1]);
        }
    }
}

void sortRow(int *row, int cols) {
    int temp;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < cols - i -1; j++) {
            if (row[j] > row[j+1]) swap(row[j], row[j+1]);
        }
    }
}

void sortRowsInMatrix (double **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        sortRow(matrix[i], cols);
    }
}
void sortRowsInMatrix (int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        sortRow(matrix[i], cols);
    }
}
void checkInput() {
    if (!cin) {
        cout << "Niewlasciwy input!" << std::endl;
        exit(1);
    }
}
void help () {
    cout << "\nWczytywanie macierzy zawsze odbywa się z klawiatury podając elementy macierzy wierszami!\n\n"
            "\n1. addMatrix - funkcja, która przyjmuje za parametry macierz a, macierz b, ilość wierszy, ilość kolumn \n i zwraca podwojny wskaznik do macierzy bedacej suma a i b"
           << "\n\n2. subtractMatrix - funkcja, ktora przyjmuje za parametry macierz a, macierz b, ilosc wierszy, ilosc kolumn i zwraca podwojny\n wskaznik do macierzy bedacej roznica a i b"
              "\n\n3. multiplyMatrix - funkcja, ktora przyjmuje za parametry macierz a, macierz b, ilosc wierszy i kolumnc macierzy a, ilosc wierszy i kolumn macierzy b, a podwojny wskaznik do macierzy bedacej iloczynem a i b"
              "\n\n4. multiplyByScalar - funkcja, ktora przyjmuje za parametry macierz a, ilosc wierszy, ilosc kolumn i skalar tego samego typu, co macierz. Funkcja zwraca podwojny wskaznik do macierzy bedacej iloczynem a i skalara"
              "\n\n5. transpozeMatrix - funkcja, ktora przyjmuje za parametry macierz a, ilosc wierszy, ilosc kolumn, a zwraca podwojny wskaznik do macierzy bedacej macierza transponowana do a"
              "\n\n6. powerMatrix - funkcja, ktora przyjmuje za parametry macierz a, ilosc wierszy, ilosc kolumn oraz stopien potegi (unsigned int), a zwraca podwojny wskaznik do macierzy bedacej wynikiem podniesienia a do podanej potegi"
              "\n\n7. determinantMatrix - funkcja, ktora przyjmuje za parametry macierz a, ilosc wierszy, ilosc kolumn, a zwraca wartosc wyznacznika macierzy a tego samego typu, co macierz"
              "\n\n8. matrixIsDiagonal - funkcja, ktora przyjmuje za parametry macierz a, ilosc wierszy, ilosc kolumn, a zwraca wartosc bool tego, czy podana macierz jest diagonalna"
              "\n\n9. swap - funkcja, ktora przyjmuje za parametry liczbe a oraz liczbe b i zamienia je miejscami"
              "\n\n10. sortRow - funkcja, ktora przyjmuje za parametry tablice (wiersz) oraz ilosc kolumn (elementow wiersza) i sortuje je rosnaco"
              "\n\n10. sortRowsInMatrix - funkcja, ktora przyjmuje za parametry macierz a, ilosc wierszy, ilosc kolumn i wykonuje sortowanie kazdego wiersza macierzy korzystajac z funkcji sortRow"<< endl;
}