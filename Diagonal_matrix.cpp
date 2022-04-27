#include "Diagonal_matrix.h"

void Diagonal_matrix::In_Array(int N, ifstream& ifst)
{
    Array = new int[N]; //�������� ������ ��� ������������ �������

    for (int i = 0; i < N; i++)
    {
        ifst >> Array[i]; //���������� ����� ������� � �������
    }
}

void Diagonal_matrix::Out_Array(int N, ofstream& ofst)
{
    ofst << "It's diagonal matrix with dimension = " << N << endl; //������� ����������� �������

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                ofst << Array[i] << " "; //������� ������� �������; (i == j) -> ������ �� ���������
            }
            else
            {
                ofst << "0 "; //(i != j) -> �� ���������, ������� ����
            }
        }

        ofst << endl;
    }
}