#include "Two_dimensional_array.h"

void Two_dimensional_array::In_Array(int N, ifstream& ifst)
{
    Array = new int* [N];

    for (int i = 0; i < N; i++) {
        Array[i] = new int[N];
    }

    bool Error = false;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
        {
            string Temp_str = "";

            ifst >> Temp_str;

            //Проверка на считывание пустого значения
            if (Temp_str == "") {
                Array = NULL;

                return;
            }

            //Проверка на то, что считанная строка - число
            if (isdigit(int(signed char(Temp_str.front())))) {
                Array[i][j] = atoi(Temp_str.c_str());
            }
            else {
                Error = true;
            }
        }
    }

    if (Error) {
        Array = NULL;
    }
}

void Two_dimensional_array::Out_Array(Key_out K_o, int N, ofstream& ofst) {
    ofst << "It's two dimensional matrix with dimension = " << N << endl;

    if (K_o == BY_LINE) { //Вывод по строкам
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                ofst << Array[i][j] << " ";
            }

            ofst << endl;
        }

        ofst << endl;
    }
    else if (K_o == BY_COLUMN) { //Вывод по столбцам
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                ofst << Array[j][i] << " ";
            }

            ofst << endl;
        }

        ofst << endl;
    }
    else if (K_o == ONE_DIMENSIONAL) { //Вывод в виде одномерного массива
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                ofst << Array[j][i] << " ";
            }
        }

        ofst << endl;
    }
}

int Two_dimensional_array::Sum(int N) {
    int Sum = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            Sum += Array[i][j];
        }
    }

    return Sum;
}

void Two_dimensional_array::Out_Only_Two_Dim(Key_out K_o, int N, ofstream& ofst) {
    Out_Array(K_o, N, ofst);
}

int** Two_dimensional_array::Get_Array() {
    return Array;
}

void Two_dimensional_array::Multi_Method(Matrix* Other, ofstream& ofst) {
    Other->Two_DimMM(ofst);
}

void Two_dimensional_array::Two_DimMM(ofstream& ofst) {
    ofst << "Two Dimensional Array and Two Dimensional Array." << endl;
}

void Two_dimensional_array::DiagonalMM(ofstream& ofst) {
    ofst << "Diagonal Matrix and Two Dimensional Array." << endl;
}

void Two_dimensional_array::TriangulaMM(ofstream& ofst) {
    ofst << "Triangular Matrix and Two Dimensional Array." << endl;
}