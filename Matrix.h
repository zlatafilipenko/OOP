#ifndef MATRIX_H
#define MATRIX_H

#include <fstream>

using namespace std;

//������ ������ �������
enum Key_out {
	BY_LINE, //�� �������
	BY_COLUMN, //�� ��������
	ONE_DIMENSIONAL //� ���� ����������� �������
};

class Matrix {
	int N; //����������� �������
	Key_out K_o;
public:
	static Matrix* In_Matrix(ifstream& ifst); //������� ����� �������
	virtual void In_Array(int N, ifstream& ifst) = 0; //����� ����������� ������� ����� �������,
											  //��� ����� ���������� ������� ������ �������
	virtual void Out_Array(Key_out K_o, int N, ofstream& ofst) = 0; //����� ����������� ������� ������ �������,
											  //��� ����� ���������� ������� ������ �������
	int Get_N(); //������� ��������� ����������� ������� (����� ��������)
	virtual int Sum(int N) = 0;
	Key_out Get_K_o(); //������� ��������� ������� ������ �������
	bool Compare(Matrix& Other);
	virtual void Out_Only_Two_Dim(int N, ofstream& ofst); //������� ������ ������ �������� ���������� �������

protected:
	Matrix() {};
};

#endif //MATRIX_H