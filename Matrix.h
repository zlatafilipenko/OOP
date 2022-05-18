#ifndef MATRIX_H
#define MATRIX_H

#include <fstream>

using namespace std;

class Matrix {
	int N;
public:
	static Matrix* In_Matrix(ifstream& ifst); //������� ����� �������
	virtual void In_Array(int N, ifstream& ifst) = 0; //����� ����������� ������� ����� �������,
                                              //��� ����� ���������� ������� ������ �������
	virtual void Out_Array(int N, ofstream& ofst) = 0; //����� ����������� ������� ������ �������,
                                              //��� ����� ���������� ������� ������ �������
	int Get_N(); //������� ��������� ����������� ������� (����� ��������)
	virtual void Out_Only_Two_Dim(int N, ofstream& ofst); //������� ������ ������ �������� ���������� �������
protected:
	Matrix() {};
};

#endif //MATRIX_H