//
// Created by pawel on 18.10.2021.
//
#include <iostream>
#include <string>
#include <cstring>
/**
 * Dodawanie macierzy mat i mat2
 * @param mat - macierz mat
 * @param mat2 - macierz mat2
 * @param rows - ilosc wierszy mat1 lub mat2
 * @param cols - ilosc kolumn mat1 lub mat2
 * @return
 */
double** addMatrix(double** mat, double** mat2, int rows, int cols);
int** addMatrix(int** mat, int** mat2, int rows, int cols);
/**
 * odejmowanie macierzy mat i mat2
 * @param mat - macierz mat
 * @param mat2 - macierz mat2
 * @param rows - ilosc wierszy mat1 lub mat2
 * @param cols - ilosc kolumn mat1 lub mat2
 * @return
 */
double** subtractMatrix(double** mat, double** mat2, int rows, int cols);
int** subtractMatrix(int** mat, int** mat2, int rows, int cols);
/**
 * mnozenie macierzy mat i mat2
 * @param mat - macierz mat
 * @param mat2  - macierz mat2
 * @param rows - ilosc wierszy mat
 * @param cols - ilosc kolumn mat
 * @param cols2 - ilosc kolumn mat2
 * @return
 */
double** multiplyMatrix(double** mat, double** mat2, int rows, int cols, int cols2);
int** multiplyMatrix(int** mat, int** mat2, int rows, int cols, int cols2);
/**
 * mnozenie macierzy mat przez skalar
 * @param mat - macierz mat
 * @param rows - ilosc wierszy mat
 * @param cols - ilosc kolumn mat
 * @param scalar - skalar
 * @return
 */
double** multiplyByScalar(double** mat, int rows, int cols, int scalar);
int** multiplyByScalar(int** mat, int rows, int cols, int scalar);
/**
 * lokujemy macierz danej zmiennej w pamieci
 * @param rows - ilosc wierszy
 * @param cols - ilosc kolumn
 * @return
 */
double** createDoubleArray(int rows, int cols);
int** createIntArray(int rows, int cols);
/**
 * wpisujemy liczby do macierzy
 * @param rows -ilosc wierszy
 * @param cols - ilosc kolumn
 * @return
 */
double** passDoubleTheMatrix(int rows, int cols);
int** passIntTheMatrix(int rows, int cols);
/**
 * drukujemy macierz matrix
 * @param matrix - macierz
 * @param rows - ilosc wierszy
 * @param cols - ilosc kolumn
 */
void printArray(double** matrix, int rows, int cols);
void printArray(int** matrix, int rows, int cols);
/**
 * transponowanie macierzy matrix
 * @param matrix - macierz matrix
 * @param rows - ilosc wierszy matrix
 * @param cols - ilosc kolumn matrix
 * @return
 */
double** transpozeMatrix (double **matrix, int rows, int cols);
int** transpozeMatrix (int **matrix, int rows, int cols);
/**
 * podnoszenie macierzy matrix do potegi
 * @param matrix - macierz matrix
 * @param rows - ilosc wierszy matrix
 * @param cols - ilosc kolumn matrix
 * @param potega - stopien potegi
 * @return
 */
double** powerMatrix (double **matrix, int rows, int cols, unsigned int potega);
int** powerMatrix (int **matrix, int rows, int cols, unsigned int potega);

/**
 * do obliczania det macierzy
 * @param matrix
 * @param n
 * @param x
 * @param y
 * @return
 */
double **submatrix(double **matrix, unsigned int n, unsigned int x, unsigned int y);
int **submatrix(int **matrix, unsigned int n, unsigned int x, unsigned int y);
/**
 * obliczanie wyznacznika macierzy matrix
 * @param matrix - macierz kwadratowa matrix
 * @param n - stopien macierzy
 * @return
 */
double determinantMatrix(double **matrix, unsigned int n);
int determinantMatrix(int **matrix, unsigned int n);
/**
 * sprawdzanie, czy macierz matrix jest diagonalna
 * @param matrix - macierz matrix
 * @param rows - ilosc wierszy matrix
 * @param cols  - ilosc kolumn matrix
 * @return
 */
bool matrixIsDiagonal (double **matrix, int rows, int cols);
bool matrixIsDiagonal (int **matrix, int rows, int cols);

bool found(double **matrix, int rows, int cols, double x);
bool found(int **matrix, int rows, int cols, double x);
/**
 * zamiana miejscami elementow wiersza macierzy
 * @param x1 - pierwsza liczba
 * @param x2 - druga liczba
 */
void swap (double &x1, double &x2);
void swap (int &x1, int &x2);
/**
 * sortowanie rosnace wiersza macierzy
 * @param row - sortowany wiersz
 * @param cols - ilosc elementow wiersza
 */
void sortRow(double *row, int cols);
void sortRow(int *row, int cols);
/**
 * sortowanie wszystkich wierszy macierzy matrix
 * @param matrix - macierz matrix
 * @param rows - ilosc wierszy matrix
 * @param cols - ilosc kolumn matrix
 */
void sortRowsInMatrix (double **matrix, int rows, int cols);
void sortRowsInMatrix (int **matrix, int rows, int cols);
/**
 * wyswietl pomoc
 */
 /**
  * sprawdza, czy podany input jest oczekiwanego typu
  */
void checkInput();
void help();

#ifndef JIPP2_LIB_H
#define JIPP2_LIB_H

#endif //JIPP2_LIB_H
