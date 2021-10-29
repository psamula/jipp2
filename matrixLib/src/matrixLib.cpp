using namespace std;
#include <../include/matrixLib.h>

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
        }
        cout << "" << endl;
    }
    return final;
}
