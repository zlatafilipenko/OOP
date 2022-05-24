#ifndef DIAGONAL_MATRIX_H
#define DIAGONAL_MATRIX_H

#include <fstream>

#include "Matrix.h"

using namespace std;

//����� "������������ �������"
class Diagonal_matrix : public Matrix {
	int* Array; //�������
public:
	int* Get_Array();

	void In_Array(int N, ifstream& ifst); //������� ����� �������
	void Out_Array(Key_out K_o, int N, ofstream& ofst); //������� ������ �������
	int Sum(int N); //������� ������� ����� ��������� �������
	Diagonal_matrix() {};
};

#endif //DIAGONAL_MATRIX_H