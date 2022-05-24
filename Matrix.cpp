#include "Matrix.h"
#include "Two_dimensional_array.h"
#include "Diagonal_matrix.h"
#include "Triangular_matrix.h"

int Matrix::Get_N() {
    return N;
}

Key_out Matrix::Get_K_o() {
    return K_o;
}

Matrix* Matrix::In_Matrix(ifstream& ifst) {
    Matrix* M;
    string Temp_str = "";

    ifst >> Temp_str;

    if ((Temp_str != "1") && (Temp_str != "2") && (Temp_str != "3") && (Temp_str != "")) {
        //Если строка содержит неверные символы, то дочитываем до конца информацию об ошибочной записи
        ifst >> Temp_str;
        ifst >> Temp_str;
        ifst >> Temp_str;

        while (ifst.peek() != '\n') {
            ifst >> Temp_str;
        }

        return 0;
    }

    int K = atoi(Temp_str.c_str());

    if (K == 1) {
        M = new Two_dimensional_array;

        ifst >> Temp_str;

        if ((Temp_str != "1") && (Temp_str != "2") && (Temp_str != "3")) {
            ifst >> Temp_str;
            ifst >> Temp_str;

            while (ifst.peek() != '\n') {
                ifst >> Temp_str;
            }

            //Идентификатор ошибочной матрицы
            M->N = -1;

            return M;
        }

        int Key_out = atoi(Temp_str.c_str());

        if (Key_out == 1) {
            M->K_o = BY_LINE;
        }
        else if (Key_out == 2) {
            M->K_o = BY_COLUMN;
        }
        else if (Key_out == 3) {
            M->K_o = ONE_DIMENSIONAL;
        }

        ifst >> Temp_str;

        if (atoi(Temp_str.c_str()) <= 0) {
            ifst >> Temp_str;

            while (ifst.peek() != '\n') {
                ifst >> Temp_str;
            }

            M->N = -1;

            return M;
        }

        for (int i = 0; i < Temp_str.size(); i++) {
            if ((Temp_str[i] == '.') || (Temp_str[i] == ',')) {
                ifst >> Temp_str;

                while (ifst.peek() != '\n') {
                    ifst >> Temp_str;
                }

                M->N = -1;

                return M;
            }
        }

        M->N = atoi(Temp_str.c_str());
    }
    else if (K == 2) {
        M = new Diagonal_matrix;

        ifst >> Temp_str;

        if ((Temp_str != "1") && (Temp_str != "2") && (Temp_str != "3")) {
            ifst >> Temp_str;
            ifst >> Temp_str;

            while (ifst.peek() != '\n') {
                ifst >> Temp_str;
            }

            M->N = -1;

            return M;
        }

        int Key_out = atoi(Temp_str.c_str());

        if (Key_out == 1) {
            M->K_o = BY_LINE;
        }
        else if (Key_out == 2) {
            M->K_o = BY_COLUMN;
        }
        else if (Key_out == 3) {
            M->K_o = ONE_DIMENSIONAL;
        }

        ifst >> Temp_str;

        if (atoi(Temp_str.c_str()) <= 0) {
            ifst >> Temp_str;

            while (ifst.peek() != '\n') {
                ifst >> Temp_str;
            }

            M->N = -1;

            return M;
        }

        for (int i = 0; i < Temp_str.size(); i++) {
            if ((Temp_str[i] == '.') || (Temp_str[i] == ',')) {
                ifst >> Temp_str;

                while (ifst.peek() != '\n') {
                    ifst >> Temp_str;
                }

                M->N = -1;

                return M;
            }
        }

        M->N = atoi(Temp_str.c_str());
    }
    else if (K == 3) {
        M = new Triangular_matrix;

        ifst >> Temp_str;

        if ((Temp_str != "1") && (Temp_str != "2") && (Temp_str != "3")) {
            ifst >> Temp_str;
            ifst >> Temp_str;

            while (ifst.peek() != '\n') {
                ifst >> Temp_str;
            }

            M->N = -1;

            return M;
        }

        int Key_out = atoi(Temp_str.c_str());

        if (Key_out == 1) {
            M->K_o = BY_LINE;
        }
        else if (Key_out == 2) {
            M->K_o = BY_COLUMN;
        }
        else if (Key_out == 3) {
            M->K_o = ONE_DIMENSIONAL;
        }

        ifst >> Temp_str;

        if (atoi(Temp_str.c_str()) <= 0) {
            ifst >> Temp_str;

            while (ifst.peek() != '\n') {
                ifst >> Temp_str;
            }

            M->N = -1;

            return M;
        }

        for (int i = 0; i < Temp_str.size(); i++) {
            if ((Temp_str[i] == '.') || (Temp_str[i] == ',')) {
                ifst >> Temp_str;

                while (ifst.peek() != '\n') {
                    ifst >> Temp_str;
                }

                M->N = -1;

                return M;
            }
        }

        M->N = atoi(Temp_str.c_str());
    }
    else {
        return 0;
    }

    M->In_Array(M->N, ifst);

    if (K == 1) {
        if (!((Two_dimensional_array*)M)->Get_Array()) {
            M->N = -1;
        }
    }
    else if (K == 2) {
        if (!((Diagonal_matrix*)M)->Get_Array()) {
            M->N = -1;
        }
    }
    else if (K == 3) {
        if (!((Triangular_matrix*)M)->Get_Array()) {
            M->N = -1;
        }
    }

    return M;
}

bool Matrix::Compare(Matrix& Other) {
    return Sum(N) > Other.Sum(Other.N);
}

void Matrix::Out_Only_Two_Dim(Key_out K_o, int N, ofstream& ofst) {
    ofst << endl;
}