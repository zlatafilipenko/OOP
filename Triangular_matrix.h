#ifndef TRIANGULAR_MATRIX_H
#define TRIANGULAR_MATRIX_H

#include "Matrix.h"
#include <fstream>

using namespace std;

//����� "����������� ������"
class Triangular_matrix : public Matrix {
    int* Array; //������
public:
    int* Get_Array(); //������� ��������� �������

    void In_Array(int N, ifstream& ifst); //������� ����� �������
    void Out_Array(Key_out K_o, int N, ofstream& ofst); //������� ������ �������
    int Sum(int N); //������� �������� ����� ��������� �������
    void Multi_Method(Matrix* Other, ofstream& ofst); //������� ������������
    void TriangulaMM(ofstream& ofst); //������� ������������ ��� ����������� �������
    void DiagonalMM(ofstream& ofst); //������� ������������ ��� ������������ �������
    void Two_DimMM(ofstream& ofst); //������� ������������ ��� ���������� �������
    Triangular_matrix() {};
};

#endif // TRIANGULAR_MATRIX_H
