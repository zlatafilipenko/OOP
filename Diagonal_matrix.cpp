#include "Diagonal_matrix.h"

void Diagonal_matrix::In_Array(int N, ifstream& ifst) {
    Array = new int[N];
    bool Error = false;

    for (int i = 0; i < N; i++) {
        string Temp_str = "";

        ifst >> Temp_str;

        //Проверка на считывание пустого значения
        if (Temp_str == "") {
            Array = NULL;

            return;
        }

        //Проверка на то, что считанная строка - число
        if (isdigit(int(signed char(Temp_str.front())))) {
            Array[i] = atoi(Temp_str.c_str());
        }
        else {
            Error = true;
        }
    }

    if (Error) {
        Array = NULL;
    }
}

void Diagonal_matrix::Out_Array(Key_out K_o, int N, ofstream& ofst) {
    ofst << "It's diagonal matrix with dimension = " << N << endl;

    int index = 0; //Индекс прохода по массиву

    if (K_o == BY_LINE) { //Вывод по строкам
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i == j) {
                    ofst << Array[index] << " ";
                    index++;
                }
                else {
                    ofst << 0 << " ";
                }
            }

            ofst << endl;
        }

        ofst << endl;
    }
    else if (K_o == BY_COLUMN) { //Вывод по столбцам
        int** Temp_matrix = new int* [N];

        for (int i = 0; i < N; i++) {
            Temp_matrix[i] = new int[N];
        }

        //Преобразование одномерного массива в двумерный - диагональную матрицу
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i == j) {
                    Temp_matrix[i][j] = Array[index];
                    index++;
                }
                else {
                    Temp_matrix[i][j] = 0;
                }
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                ofst << Temp_matrix[j][i] << " ";
            }

            ofst << endl;
        }

        ofst << endl;
    }
    else if (K_o == ONE_DIMENSIONAL) { //Вывод в виде одномерного массива
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i == j) {
                    ofst << Array[index] << " ";
                    index++;
                }
                else {
                    ofst << 0 << " ";
                }
            }
        }

        ofst << endl;
    }
}

int Diagonal_matrix::Sum(int N) {
    int Sum = 0;

    for (int i = 0; i < N; i++) {
        Sum += Array[i];
    }

    return Sum;
}

int* Diagonal_matrix::Get_Array() {
    return Array;
}

void Diagonal_matrix::Multi_Method(Matrix* Other, ofstream& ofst) {
    Other->DiagonalMM(ofst);
}

void Diagonal_matrix::DiagonalMM(ofstream& ofst) {
    ofst << "Diagonal Matrix and Diagonal Matrix." << endl;
}

void Diagonal_matrix::Two_DimMM(ofstream& ofst) {
    ofst << "Two Dimensional Array and Diagonal Matrix." << endl;
}

void Diagonal_matrix::TriangulaMM(ofstream& ofst) {
    ofst << "Triangular Matrix and Diagonal Matrix." << endl;
}