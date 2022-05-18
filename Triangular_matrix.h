#ifndef TRIANGULAR_MATRIX_H
#define TRIANGULAR_MATRIX_H

#include "Matrix.h"
#include <fstream>

using namespace std;

class Triangular_matrix : public Matrix {
    int* Array;
public:
    void In_Array(int N, ifstream& ifst); //������� ����� �������
    void Out_Array(int N, ofstream& ofst); //������� ������ �������
    Triangular_matrix() {};
};

#endif // TRIANGULAR_MATRIX_H
