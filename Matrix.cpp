#include "Matrix.h"
#include "Two_dimensional_array.h"
#include "Diagonal_matrix.h"
#include "Triangular_matrix.h"

int Matrix::Get_N()
{
    return N;
}

Matrix* Matrix::In_Matrix(ifstream& ifst) {
    Matrix* M; //������� ��������� �� �������
    int K;

    ifst >> K; //��������� ������������� �������

    if (K == 1)
    {
        M = new Two_dimensional_array; //������� ��������� ������

        ifst >> M->N; //C�������� ����������� �������
    }
    else if (K == 2)
    {
        M = new Diagonal_matrix; //������� ������������ �������

        ifst >> M->N; //C�������� ����������� �������
    }
    else if (K == 3)
    {
        M = new Triangular_matrix; //������� ����������� �������

        ifst >> M->N; //C�������� ����������� �������
    }
    else
    {
        return 0;
    }

    M->In_Array(M->N, ifst); //��������� �������� �������

    return M;
}