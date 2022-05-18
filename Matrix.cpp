#include "Matrix.h"
#include "Two_dimensional_array.h"
#include "Diagonal_matrix.h"
#include "Triangular_matrix.h"

int Matrix::Get_N()
{
    return N;
}

Key_out Matrix::Get_K_o()
{
    return K_o;
}

Matrix* Matrix::In_Matrix(ifstream& ifst) {
    Matrix* M; //������� ��������� �� �������
    int K;

    ifst >> K; //��������� ������������� �������

    if (K == 1)
    {
        M = new Two_dimensional_array; //������� ��������� ������

        int Key_out = 0;

        ifst >> Key_out;

        if (Key_out == 1)
        {
            M->K_o = BY_LINE;
        }
        else if (Key_out == 2)
        {
            M->K_o = BY_COLUMN;
        }
        else if (Key_out == 3)
        {
            M->K_o = ONE_DIMENSIONAL;
        }

        ifst >> M->N; //C�������� ����������� �������
    }
    else if (K == 2)
    {
        M = new Diagonal_matrix; //������� ������������ �������

        int Key_out = 0;

        ifst >> Key_out;

        if (Key_out == 1)
        {
            M->K_o = BY_LINE;
        }
        else if (Key_out == 2)
        {
            M->K_o = BY_COLUMN;
        }
        else if (Key_out == 3)
        {
            M->K_o = ONE_DIMENSIONAL;
        }

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