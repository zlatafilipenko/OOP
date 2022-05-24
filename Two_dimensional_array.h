#ifndef TWO_DIMENSIONAL_ARRAY_H
#define TWO_DIMENSIONAL_ARRAY_H

#include <fstream>

#include "Matrix.h"

using namespace std;

//����� "��������� ������"
class Two_dimensional_array : public Matrix {
	int** Array; //������
public:
	int** Get_Array();

	void In_Array(int N, ifstream& ifst);  //������� ����� �������
	void Out_Array(Key_out K_o, int N, ofstream& ofst); //������� ������ �������
	int Sum(int N); //������� �������� ����� ��������� �������
	void Out_Only_Two_Dim(Key_out K_o, int N, ofstream& ofst); //������� ������ ������ ���������� �������
	void Multi_Method(Matrix* Other, ofstream& ofst); //������� ������������
	void Two_DimMM(ofstream& ofst); //������� ������������ ��� ���������� �������
	void DiagonalMM(ofstream& ofst); //������� ������������ ��� ������������ �������
	void TriangulaMM(ofstream& ofst); //������� ������������ ��� ����������� �������
	Two_dimensional_array() {};
};
#endif //TWO_DIMENSIONAL_ARRAY_H