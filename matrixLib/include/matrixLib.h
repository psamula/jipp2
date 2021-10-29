//
// Created by pawel on 18.10.2021.
//
#include <iostream>
#include <string>
#include <cstring>

double** addMatrix(double** mat, double** mat2, int rows, int cols);
int** addMatrix(int** mat, int** mat2, int rows, int cols);

double** subtractMatrix(double** mat, double** mat2, int rows, int cols);
int** subtractMatrix(int** mat, int** mat2, int rows, int cols);

double** multiplyMatrix(double** mat, double** mat2, int rows, int cols, int cols2);
int** multiplyMatrix(int** mat, int** mat2, int rows, int cols, int cols2);

double** multiplyByScalar(double** mat, int rows, int cols, int scalar);
int** multiplyByScalar(int** mat, int rows, int cols, int scalar);

double** createDoubleArray(int rows, int cols);
int** createIntArray(int rows, int cols);

double** passDoubleTheMatrix(int rows, int cols);
int** passIntTheMatrix(int rows, int cols);

void printArray(double** matrix, int rows, int cols);
void printArray(int** matrix, int rows, int cols);

#ifndef JIPP2_LIB_H
#define JIPP2_LIB_H

#endif //JIPP2_LIB_H
