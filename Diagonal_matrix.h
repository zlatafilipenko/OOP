#ifndef DIAGONAL_MATRIX_H
#define DIAGONAL_MATRIX_H

#include <fstream>

#include "Matrix.h"

using namespace std;

class Diagonal_matrix: public Matrix {
	int* Array; //�������
public:
	void In_Array(int N, ifstream& ifst); //������� ����� �������
	void Out_Array(int N, ofstream& ofst); //������� ������ �������
	Diagonal_matrix() {};
};

#endif //DIAGONAL_MATRIX_H