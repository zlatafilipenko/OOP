#ifndef TWO_DIMENSIONAL_ARRAY_H
#define TWO_DIMENSIONAL_ARRAY_H

#include "Matrix.h"

using namespace std;

class Two_dimensional_array : public Matrix {
	int** Array; //������
public:
	void In_Array(int N, ifstream& ifst);  //������� ����� �������
	int Sum(int N); //������� ������� ����� ��������� �������
	void Out_Array(Key_out K_o, int N, ofstream& ofst); //������� ������ �������

	Two_dimensional_array() {};
};
#endif //TWO_DIMENSIONAL_ARRAY_H